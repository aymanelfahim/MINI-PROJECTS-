def main():
    ...n=input("mealtime")
        if 7<=convert(n)<=8 :
            print("break time")
        elif 12<=convert(n)<=13:
            print("lunchtime")



def convert(time):
    ... x,y=time.split(":")
        y=float(y)/60
        return y+float(x)


if __name__ == "__main__":
    main()