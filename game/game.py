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
      try:
        n=int(input("doner n: "))
      except ValueError:
        continue
      else:
          if n>0:
              return n
if __name__ == "__main__":
    main()



