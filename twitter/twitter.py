def main():
    n=input("donner un mot")
    print(shorten(n))



def shorten(word):
    S=""
    for i in word:
        if i not in ['a','e','u','i','o','A','E','U','I','O']:
            S=S+i
    return S



if __name__ == "__main__":
    main()