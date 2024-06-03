import argparse
import pip

'''pip.main(["uninstall", "numpy"])
pip.main(["install", "numpy", "--user"])
pip.main(["install", "openpyxl", "--user"])'''
parser = argparse.ArgumentParser()



parser.add_argument("team")


team = parser.parse_args().team

from squadInfo import getTeamResult
print(getTeamResult(team))

from Salary_cap import getStat
print(getStat(team))
