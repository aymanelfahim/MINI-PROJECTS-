while True:
    try:
        operat=input("fraction:")
        a=int(operat[0])
        b=int(operat[2])
    except  ValueError or  ZeroDivisionError:
        pass
    else :
        break
c=(a/b)*100
if c==99:
    print("F")
elif c==1:
    print("E")
else:
    print(str(c)+"%")