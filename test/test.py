def egale(A,B):
    if len(A)!=len(B):
        return False
    elif A==[] or B==[]:
        return True
    elif A[0]!=B[0]:
        return False
    else:
        return egale(A[1:],B[1:])
print(egale([1,6,3,4],[1,2,3,4]))