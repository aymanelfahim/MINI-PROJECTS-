import sys
def main():
    if getparametre(sys.argv):
          S=open(sys.argv[1])
          X=S.readlines()
          count(X)




def getparametre(K):
    if len(K)>2:
        sysexit("too much command lines")
    elif len(K)<2:
        sys.exit("too few command lines")
    else:
        if "py" not in K[1]:
            sys.exit("not a python file")

    return True
def count(M):
    S=0
    return S

def open(file):
    try:
        L=open(file)

    except FileNotFoundError:
                print("file not found")
    else:
                return L

main()





