from squadInfo import team  # Importing the 'team' variable from the main module.

import pandas as pd  # Importing pandas library for data manipulation and analysis.


# Reading the CSV file that contains NBA team abbreviations into a pandas DataFrame.
abb = pd.read_csv('~/PycharmProjects/NbaSquadGenerator/File.csv/Dump/Team Abbrev.csv')

# Reading the Excel file that contains NBA contracts summary into a pandas DataFrame.
cap = pd.read_excel('~/PycharmProjects/NbaSquadGenerator/File.csv/NBA Contracts Summary.xlsx')

# Renaming the columns of the contracts DataFrame for better readability.
new_column_names = ['Rk', 'team', '2023-24', '2024-25', '2025-26', '2026-27', '2027-28', '2028-29']
cap.columns = new_column_names

# Selecting rows from the DataFrame to exclude irrelevant data.
cap = cap[2:32]

# Merging the contracts DataFrame with the team abbreviations DataFrame on the 'team' column.
# The 'inner' join ensures that only teams present in both DataFrames are included.
df = pd.merge(cap, abb, on='team', how='inner')

# Filtering the merged DataFrame to only include rows where the season is 2024.
curDf = df.loc[df['season'] == 2024]

# Selecting the row in the filtered DataFrame that corresponds to the specified team.
salary_cap = curDf.loc[curDf['abbreviation'] == str(team)]

# Extracting the rank ('Rk') of the specified team from the salary_cap DataFrame.
rk = int(salary_cap['Rk'].iloc[0])

# Conditional logic to select a subset of teams based on the rank of the specified team.
# If the rank is 1 or 2, select the top 5 teams.
if rk == 1 or rk == 2:
    final = curDf[:5]
# If the rank is 29 or 30, select the bottom 5 teams.
elif rk == 30 or rk == 29:
    final = curDf[25:]
# Otherwise, select the teams that are 2 ranks above and 2 ranks below the specified team.
else:
    final = curDf[rk-3:rk+2]

# Selecting only the columns 'Rk', 'team', and '2023-24' from the final DataFrame.
final = final[['Rk', 'team', '2023-24']]

# Converting the final DataFrame to a string format without the index for a clean print output.
Output0 = final.to_string(index=False)
