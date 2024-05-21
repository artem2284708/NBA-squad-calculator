import pandas as pd

from main import total
from outCandidates import to_replace
from Efectivity_of_player import real_sum, convert_dollar_to_int
from squadInfo import team


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
qwerty['price/quality'] = qwerty.apply(lambda row: int(row['Total Salary']/row['per']), axis=1)

qwerty = qwerty.sort_values(by='price/quality', ascending=True)



# Create a DataFrame to store the selected players
Output3 = pd.DataFrame(columns=qwerty.columns)

# Iterate over to_replace DataFrame and find matching players in qwerty
for index, row in to_replace.iterrows():
    pos = row['pos']
    salary = row['Total Salary']
    i = 0
    while i < len(qwerty):
        best_player = qwerty[qwerty['pos'] == pos].iloc[i]
        if 100 - (best_player['Total Salary'] / salary * 100) <= abs(5):
            Output3 = Output3._append(best_player, ignore_index=True)
            break
        i += 1
