def subset(a):
    n=len(a)
    res=[]
    for i in range (1<<n):
        x=[]
        for j in range(n):
            if(i&(1<<j)):
                x.append(a[j])
        res.append(x)
    return res
array=list(map(int,input().split()))
print(subset(array))

