import inflect
def main():
    S=""
    while True:
        try:
            n=input("Name: ")
        except EOFError:
            print("adieu,adieu to ",inflect.join(M))
            break
        else:
            S=S+","+n
        M=S.split(",")




main()

