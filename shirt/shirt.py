import sys
def main():




















def getimage(L):
    if len(L)<3:
        sys.exit("too few command line arguements)
    elif len(L)>3:
        sys.exit("too much command line arguments")
    else:
        if "jpg" or "jpeg" or "png" not in L:
            sys.exit("not the format")
        elif
