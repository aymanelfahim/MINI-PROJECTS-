while True:
    try:
        operat=input("fraction:").split("/")
        a,b=int(operat[0]),int(operat[1])

    except  ValueError or  ZeroDivisionError:
        pass
    else :
        break
c=rounda/b)*100
if c==99:
    print("F")
elif c==1:
    print("E")
else:
    print(str(c)+"%")