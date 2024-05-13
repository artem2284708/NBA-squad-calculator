import pandas as pd

# открываю файл с самыми глвными статами
advanced = pd.read_csv('~/PycharmProjects/NbaSquadGenerator/File.csv/Advanced.csv')
salary = pd.read_excel('~/PycharmProjects/NbaSquadGenerator/File.csv/NBA Player Contracts.xlsx')
new_column_names = ['Rk', 'player', 'Tm', '2023-24', '2024-25', '2025-26', '2026-27', '2027-28', '2028-29', 'Guaranteed']
salary.columns = new_column_names
salary = salary[1:500]

curAdvanced = advanced.loc[advanced['season'] == 2024]  # применяю фильтр на текущий год

total = pd.merge(curAdvanced, salary, on='player', how='inner').drop(columns='birth_year')



team = input().upper()  # тут человек пишет название команды по которой ведёт поиск
# но в будущем - в QT - это будет делаться кликом


curTeam = total.loc[total['tm'] == f'{team}']   # фильтр по команде


"Тут начинается вывод таблицы №1"


mp_team = curTeam.sort_values(by='mp', ascending=False)[['pos', 'player', 'Guaranteed']]  # фильтр по минутам

# этим избегаем ошибки со стартовой пятёркой (каждый игрок должен быть со своей позиции)
squad = pd.DataFrame(columns=['pos', 'player', 'Guaranteed'])
pos = ['PG', 'SG', 'SF', 'PF', 'C']

for i in pos:
    curPos = (mp_team.loc[mp_team['pos'] == f'{i}']) # фильтр по позиции
    player = curPos.loc[curPos['pos'] == f'{i}'].iloc[0]  # выбор игрока с максимальным временем на позиции
    squad = squad._append(player)


# список индексов игроков в starting_5
selected_players_index = squad.index.tolist()

# Удаляю игроков по индексу из starting_5 и вывожу всех остальных также по времени
curTeam_updated = mp_team.drop(index=selected_players_index)

squad = squad._append(curTeam_updated)

print(squad)

