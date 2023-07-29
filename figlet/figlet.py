import pyfiglet as pfg
import sys
def main():
    if len(sys.argv)==3:
        if sys.argv[1]== "-f" or sys.argv[2]== "--font":
            inp=input("input: ")
            print("output: " ,pfg.figlet_format(inp,font=sys.argv[2]))
        else:
            sys.exit("faute technique ")
    elif len(sys.argv)==1:
        inp=input("input: ")
        print("output: ", pfg.figlet_format(inp,))
    else:
        print("nvalid")





















main()