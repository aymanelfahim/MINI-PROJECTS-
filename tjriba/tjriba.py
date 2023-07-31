
def mhi(s):
    L=[]
    for k in s:
        L+=[k]
    for i in range(1,len(L)-1):
        for j in range(i):
                if L[j]==L[i]:
                    del(L[i])

    return L
n=input("donner :")
print(mhi(n))