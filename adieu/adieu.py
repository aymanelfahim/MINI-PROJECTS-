import inflect as p
def main():
    S=""
    while True:
        try:
            n=input("Name: ")
        except EOFError:
            print("adieu,adieu to ",p.join(M))
            break
        else:
            S=S+","+n
        M=S.split(",")




main()

