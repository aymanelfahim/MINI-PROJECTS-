import random
def main():
    a=random.randrange(1, get() )
    while True:
        try:
            k=int(input("donner un nombre:"))
        except ValueError:
            continue
        else:

            if k>0:
                if k>a:
                    print("too larg, try again ")
                elif k<a:
                    print("too small),try again")
                else:
                    print("just right")

def get():
    while True:
      n=int(input("doner n: "))
      if n>0:
        break
    return n
if __name__ == "__main__":
    main()



