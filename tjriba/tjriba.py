
def mhi(s):
    L=[]
    for k in s:
        L+=[k]
    for i in range(len(L)):
        for j in range(i):
            while i!=j:
                if L[j]==L[i]:
                    del(L[j])

    return L