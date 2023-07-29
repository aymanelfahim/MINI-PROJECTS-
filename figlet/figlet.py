import pyfiglet as pfg
import sys
def main():
    if len(sys.argv)==3:
        inp=input("input: ")
        print("output: " ,pfg.figlet_format(inp,font=sys.argv[2]))
    elif len(sys.argv)=















result = pfg.figlet_format