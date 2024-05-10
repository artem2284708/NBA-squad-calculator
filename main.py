import pandas as pd

# открываю файл с самыми глвными статами
advanced = pd.read_csv('~/PycharmProjects/NbaSquadGenerator/File.csv/Advanced.csv')

curAdvanced = advanced.loc[advanced['season'] == 2024]  # применяю фильтр на текущий год

team = input().upper()  # тут человек пишет название команды по которой ведёт поиск
# но в будущем - в QT - это будет делаться кликом


curTeam = curAdvanced.loc[curAdvanced['tm'] == f'{team}']   # фильтр по команде

"Тут начинается вывод таблицы №1"


mp_team = curTeam.sort_values(by='mp', ascending=False)[['pos', 'player']]  # фильтр по минутам

# этим избегаем ошибки со стартовой пятёркой (каждый игрок должен быть со своей позиции)
squad = pd.DataFrame(columns=['pos', 'player'])
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

print(curTeam.columns)

