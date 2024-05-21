from main import total
import pandas as pd

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
Output1 = squad.to_string(index=False)


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
