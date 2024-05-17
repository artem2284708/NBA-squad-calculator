import pandas as pd

# Open the file containing main statistics
advanced = pd.read_csv('~/PycharmProjects/NbaSquadGenerator/File.csv/Advanced.csv')
# Open the file containing salary information
salary = pd.read_excel('~/PycharmProjects/NbaSquadGenerator/File.csv/NBA Player Contracts.xlsx')

# Rename columns in the salary DataFrame
new_column_names = ['Rk', 'player', 'Tm', '2023-24', '2024-25', '2025-26', '2026-27', '2027-28', '2028-29', 'Guaranteed']
salary.columns = new_column_names

# Limit the salary DataFrame to the first 500 rows
salary = salary[1:500]

# Filter the advanced statistics DataFrame for the current year
curAdvanced = advanced.loc[advanced['season'] == 2024]

# Merge the filtered advanced statistics and salary DataFrames based on player names
# Drop the 'birth_year' column after merging
total = pd.merge(curAdvanced, salary, on='player', how='inner').drop(columns='birth_year')

# Prompt the user to input the name of the team they want to search for
team = input().upper()  # In the future, this will be done through GUI

# Filter the merged DataFrame based on the team name entered by the user
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
output_Table1 = squad.to_string(index=False)

# Print Table 1
print(output_Table1)
