def binarySearch(arr,x):
    n=len(arr)
    low=0
    high=n-1
    if arr==sorted(arr):
        while(low<=high):
            mid=(low+high)//2
            if arr[mid]==x:
                return mid
            elif(x>arr[mid]):
                low = mid + 1
            else :
                high = mid - 1
        return -1
    else:
        print("array is not sorted")
arr=[23,45,46,67,88,90]
findAt=binarySearch(arr,45)
print(findAt)



