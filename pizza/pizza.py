import sys
import tabulate
import csv
def main():
    L=[]
    with open(sys.argv[1]) as file:
        reader = csv.reader(file)
        for row in reader:
            L=L.append(row)

    print (tabulate(L,headers,tablefmt="grid"))








def getparametre(K):
    if len(K)>2:
        sysexit("too much command lines")
    elif len(K)<2:
        sys.exit("too few command lines")
    else:
        if "csv" not in K[1]:
            sys.exit("not acsv file")

    return True
main()