import sys
def main():
    if getparametre(sys.argv):
          S=open("sys.argv[1]")
          X=S.readlines()
          count(X)




def getparametre(K):
    if len(K)>2:
        print("too much command lines")
    elif len(K)<2:
        print("too few command lines")
    else:
        if "py" not in K[1]:
            print("not a python file")
        else:
              return True
def count(M):
    S=0
    for i in M:
        if i[0]=="#" or i[0]==" ":
            continue
        S=S+1
    return S

def open(file):
    try:
                 L=open("file")

    except FileNotFoundError:
                print("file not found")
    else:
                return L

main()





