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
        elif





def rech(a,b,c,L):
    if a in L[1] and in L[2]:
        return a
    elif b in L[1]:
        return b
    elif c in L[1]:
    return c


