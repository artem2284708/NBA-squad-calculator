import pandas as pd

# открываю файл с самыми глвными статами
advanced = pd.read_csv('~/PycharmProjects/NbaSquadGenerator/File.csv/Advanced.csv')

curAdvanced = advanced.loc[advanced['season'] == 2024]  # применяю фильтр на текущий год

team = input().upper()  # тут человек пишет название команды по которой ведёт поиск
# но в будущем - в QT - это будет делаться кликом


curTeam = curAdvanced.loc[curAdvanced['tm'] == f'{team}']   # фильтр по команде
outputTable1 = curTeam.sort_values(by='mp', ascending=False)[['pos', 'player']]     # вывод первой таблицы

print(outputTable1)
