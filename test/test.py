def egale(A,B):
    if len(A)!=len(B):
        return False
    elif A[0]!=B[0]:
        return False
    elif A==[]:
        return True
    else:
        return egale(A[1:],B[1:])
print(egale([1,2,3,4],[1,2,3,4]))