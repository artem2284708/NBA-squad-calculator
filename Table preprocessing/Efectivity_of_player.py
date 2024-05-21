from squadInfo import curTeam  # Importing curTeam from main module
from squadInfo import further


def convert_dollar_to_int(s):
    """
    Function to convert dollar strings to integers.

    Args:
        s (str): Dollar string to be converted.

    Returns:
        int: Integer value representing the dollar amount.
    """
    if isinstance(s, str):
        # Remove dollar sign and commas, then convert to integer
        return int(s.replace("$", "").replace(",", ""))
    else:
        return 0  # Return 0 if input is not a string


def real_sum(col: list, DataFrame):
    """
    Function to calculate a weighted sum based on column values.

    Args:
        col (list): List of column names to consider for calculation.
        DataFrame (DataFrame): Pandas DataFrame containing the data.

    Returns:
        int: Weighted sum of the specified columns.
    """
    k = 0
    # Determine the number of columns with non-zero values
    for name in col:
        if DataFrame[name] != 0:
            k += 1
        else:
            break

    # Define weights for each column
    summ = [0.3, 0.25, 0.2, 0.15, 0.1, 0.05]
    # Calculate the divisor for normalization
    div = sum(summ[:k])
    right_sum = 0
    num = 0
    # Calculate the weighted sum
    for name in col[:k]:
        right_sum += DataFrame[name] * summ[num] / div
        num += 1
    return int(right_sum)


for i in further:
    if i in curTeam.index:
        curTeam = curTeam.drop(index=i)

columns = ['2023-24', '2024-25', '2025-26', '2026-27', '2027-28', '2028-29']

# Convert dollar strings to integers for each column
for col in columns:
    curTeam[col] = curTeam[col].apply(convert_dollar_to_int)

# Calculate total salary using real_sum function for each row
curTeam['Total Salary'] = curTeam.apply(lambda row: real_sum(columns, row), axis=1)

# Select necessary columns for final DataFrame
final_df = curTeam[['player', 'pos', 'mp', 'age', 'per', 'Total Salary']]

# Calculate a metric combining salary and performance (wrong formula)
final_df['price/quality'] = final_df.apply(lambda row: int(row['Total Salary']/row['per']), axis=1)
# The formula should be updated, as noted.

# Sort the DataFrame by the calculated metric
final = final_df.sort_values(by='price/quality', ascending=False).head()
