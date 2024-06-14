import pandas as pd
from main import total


# Filter the merged DataFrame based on the team name entered by the user
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

def convert_int_to_dollar(n):
    """
    Function to convert integer values to dollar strings.

    Args:
        n (int): Integer value to be converted.

    Returns:
        str: Dollar string representation of the integer amount.
    """
    if isinstance(n, int):
        # Format the integer with commas and add a dollar sign
        return "${:,}".format(n)
    else:
        return "$0"  # Return $0 if input is not an integer

def getTeamResult(team):
    curTeam = total.loc[total['tm'] == f'{team}']

    # "Here begins the output of Table 1"

    # Sort the DataFrame by minutes played in descending order and select relevant columns
    mp_team = curTeam.sort_values(by='mp', ascending=False)[['pos', 'player', 'Guaranteed']]

    # Avoid errors with the starting lineup (each player must be from their respective position)
    squad = pd.DataFrame(columns=['pos', 'player', 'Guaranteed'])
    pos = ['PG', 'SG', 'SF', 'PF', 'C']

    for i in pos:
        # Filter players by position
        curPos = (mp_team.loc[mp_team['pos'] == f'{i}'])
        # Select the player with the maximum time played for each position
        player = curPos.loc[curPos['pos'] == f'{i}'].iloc[0]
        squad = squad._append(player)  # Append the player to the squad DataFrame

    # Get the indices of players in the starting lineup
    selected_players_index = squad.index.tolist()

    # Remove players from the starting lineup and display all remaining players sorted by time played
    curTeam_updated = mp_team.drop(index=selected_players_index)
    squad = squad._append(curTeam_updated)
    squad['Guaranteed'] = squad['Guaranteed'].replace(",", ".", regex=True)
    squad.to_csv("/Users/artem2284708/PycharmProjects/NbaSquadGenerator/Table_preprocessing/Squad.csv")



    squa = pd.DataFrame(columns=['pos', 'player', 'Guaranteed'])
    per_team = curTeam.sort_values(by='per', ascending=False)[['pos', 'player', 'Guaranteed']]
    for i in pos:
        # Filter players by position
        curPos = (per_team.loc[per_team['pos'] == f'{i}'])
        # Select the player with the maximum time played for each position
        player = curPos.loc[curPos['pos'] == f'{i}'].iloc[0]
        squa = squa._append(player)  # Append the player to the squad DataFrame
        per_team_players_index = squa.index.tolist()

    further = set(per_team_players_index + selected_players_index)


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






    to_replace = final[['pos', 'Total Salary']]
    final['Total Salary'] = final['Total Salary'].apply(convert_int_to_dollar)

    final = final[['player', 'pos']]
    final.to_csv("/Users/artem2284708/PycharmProjects/NbaSquadGenerator/Table_preprocessing/Kick.csv")

    qwerty = total[['player', 'tm', 'pos', 'per', '2023-24', '2024-25', '2025-26', '2026-27', '2027-28', '2028-29']]

    columns = ['2023-24', '2024-25', '2025-26', '2026-27', '2027-28', '2028-29']

    # Convert dollar strings to integers for each column
    for col in columns:
        qwerty[col] = qwerty[col].apply(convert_dollar_to_int)

    qwerty = qwerty[qwerty['per'] != 0]
    qwerty = qwerty[qwerty['tm'] != team]

    # Calculate total salary using real_sum function for each row
    qwerty['Total Salary'] = qwerty.apply(lambda row: real_sum(columns, row), axis=1)
    qwerty = qwerty[qwerty['Total Salary'] != 0]
    # Calculate a metric combining salary and performance (wrong formula)
    qwerty['price/quality'] = qwerty.apply(lambda row: int(row['Total Salary'] / row['per']), axis=1)

    qwerty = qwerty.sort_values(by='price/quality', ascending=True)

    # Create a DataFrame to store the selected players
    Output = pd.DataFrame(columns=qwerty.columns)

    # Iterate over to_replace DataFrame and find matching players in qwerty
    for index, row in to_replace.iterrows():
        pos = row['pos']
        salary = row['Total Salary']
        i = 0
        while i < len(qwerty):
            best_player = qwerty[qwerty['pos'] == pos].iloc[i]
            if 100 - (best_player['Total Salary'] / salary * 100) <= abs(5):
                Output = Output._append(best_player)
                break
            i += 1

    Output = Output[['player', 'tm', 'pos']]

    Output.to_csv("/Users/artem2284708/PycharmProjects/NbaSquadGenerator/Table_preprocessing/Newcomers.csv")
