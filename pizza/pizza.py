def main():







def getparametre(K):
    if len(K)>2:
        sysexit("too much command lines")
    elif len(K)<2:
        sys.exit("too few command lines")
    else:
        if "csv" not in K[1]:
            sys.exit("not acsv file")

    return True