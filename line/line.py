import sys
def main():
    if getparametre(sys.argv):
          A=getlist(sys.argv[1])
          count(A)




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
    for i in M:
         i=i.strip()
         if len(i)!=0:
              S=S+1
    return S

def getlist(file):
    try:
        f=open(file)
        L=f.readlines()


    except FileNotFoundError:
                sys.exit("file not found")
    return L


main()





