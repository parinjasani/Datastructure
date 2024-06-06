def linearserach(arr,x):
    n=len(arr)
    for i in range(n):
        if arr[i]==x:
            return i
    return -1
arr=[1]
findeAt=linearserach(arr,3)
print(findeAt)
