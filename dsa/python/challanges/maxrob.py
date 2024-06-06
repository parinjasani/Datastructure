def rob(arr):
    if len(arr)<2:
        return arr[0]
    dp=[]
    result=[]
    dp.append(arr[0])
    if (arr[1] > arr[0]):
        dp.append(arr[1])
    else:
        dp.append(arr[0])
    for i in range(2,len(arr)):
        x=max(dp[i-2]+arr[i],dp[i-1])
        dp.append(x)
    return dp[len(arr)-1]

def maxirob(arr):
    if len(arr)<2:
        return arr[0]
    skiplasthouse=[]
    skipfirsthouse=[]
    for i in range(0,len(arr)):
        if i<len(arr)-1:
            skiplasthouse.append(arr[i])
        if i<len(arr)-1:
            skipfirsthouse.append(arr[i+1])
    # print(skiplasthouse,skipfirsthouse)
    lootskipinglast=rob(skiplasthouse)
    lootskipingfirst=rob(skipfirsthouse)
    return max(lootskipingfirst,lootskipinglast)

arr=list(map(int,input().strip().split()))
print(maxirob(arr))
