import inflect
p = inflect.engine()
S=[]
while True:
    try:
        n=input("Name: ")
    except EOFError:
        print("adieu,adieu to ",p.join(S))
        break
    else:
        S=S+[n]






