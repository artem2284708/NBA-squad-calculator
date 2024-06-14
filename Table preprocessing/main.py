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
total = total.drop_duplicates(subset='player')
total = total[total['per'] > 0]
total.to_csv("/Users/artem2284708/PycharmProjects/NbaSquadGenerator/Table_preprocessing/Total.csv")