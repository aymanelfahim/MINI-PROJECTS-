import sys
def main():




















def getimage(L):
    if len(L)<3:
        sys.exit("too few command line arguements)
    elif len(L)>3:
        sys.exit("too much command line arguments")
    else:
        if "jpg" or "jpeg" or "png" not in L[1] or L[2]:
            sys.exit("not the format")
        elif rech("jpg","jpeg","png",L)==False:
            sys.exit("not the same format")
        else:
            return True





def rech(a,b,c,L):
    if a in L[1] and in L[2]:
        return True
    elif b in L[1] and in L[2]:
        return True
    elif c in L[1] and in L[2]:
        return True
    else:
            return False


