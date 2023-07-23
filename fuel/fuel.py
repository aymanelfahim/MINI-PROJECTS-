while True:
    try:
        operat=input("fraction:")
        
    except  ValueError or  ZeroDivisionError:
        pass
    else :
        break
c=round(a/b)*100
if c==99:
    print("F")
elif c==1:
    print("E")
else:
    print(str(c)+"%")