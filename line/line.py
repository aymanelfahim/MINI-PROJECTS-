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
