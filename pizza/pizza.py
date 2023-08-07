import sys
from tabulate import tabulate
import csv
def main():
    if getparametre(sys.argv):


        L=[]
        with open(sys.argv[1]) as file:
            reader = csv.reader(file)
            for row in reader:
                    L.append(row)
        headers=L[0]
        table=L[1::]
        print(tabulate(table,headers,tablefmt="grid"))








def getparametre(K):
    if len(K)>2:
        sys.exit("too much command lines")
    elif len(K)<2:
        sys.exit("too few command lines")
    else:
        if "csv" not in K[1]:
            sys.exit("not a csv file")

    return True
main()