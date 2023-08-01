def main():
    S=""
    while True:
        try:
            n=input("Name: ")
        except EOFError:
            break
        else:
            S=S+n
            print("adieu,adieu",S)
main()

