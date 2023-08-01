def main():
    while True:
        try:
            n=input("Name: ")
        except EOFError:
            break
        else:
            print("adieu,adieu",n)
