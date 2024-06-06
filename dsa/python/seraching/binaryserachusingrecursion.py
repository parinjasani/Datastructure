def binarySearch(arr,x,l,h):
    if(l<=h):
        mid=(l+h)//2
        if arr[mid]==x:
            return mid
        elif x>arr[mid]:
            return binarySearch(arr,x,mid+1,h)
        elif x<arr[mid]:
            return binarySearch(arr,x,l,mid-1)
    else:
        return -1

arr=[23,45,46,67,88,90]
l=0
h=len(arr)-1
findAt=binarySearch(arr,90,l,h)
print(findAt)