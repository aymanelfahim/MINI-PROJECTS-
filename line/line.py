import sys
def main()
    getparametre()
def getparametre()
    if len(sys.argv)>2:
        print("too much command lines")
    elif len(sys.argv)<2:
        print("too few command lines")
    else:
        if "py" not in sys.argv[1]:
            print("not a python file")
        else:
            try:
                 L=open("sys.argv[1]")

            except FileNotFoundError:
                print("file not found")
            else:
                lines=L.readlines()

                count(lines)
 def count(M):
    S=0
    for i in M:
        if i[0]="#" or i[0]=" ":
            continue
        S=S+1




