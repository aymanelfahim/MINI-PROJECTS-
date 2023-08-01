import inflect
S=[]
while True:
    try:
        n=input("Name: ")
    except EOFError:
        print("adieu,adieu to ",inflect.join(S))
        break
    else:
        S=S+[n]






