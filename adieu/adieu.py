def main():
    S=""
    while True:
        try:
            n=input("Name: ")
        except EOFError:
            print("adieu,adieu to ",S)
            break
        else:
            S=S+","+n


main()

