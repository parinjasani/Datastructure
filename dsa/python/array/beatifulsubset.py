def beautifulSubsets(nums, k ):
    n = len(nums)
    count = 0
    subsetlist = []
    if len(nums) == 1:
        return 1
    for i in range(1 << n):
        x = []
        for j in range(n):
            if (i & (1 << j)):
                x.append(nums[j])
        if len(x) == 1:
            count += 1
            print(x)
        else:
            k1 = 0
            for i in x:
                k1 = abs(k1 - i)
            if k1 != k:
                count += 1
                print(x)
    return count

num=[2,4,6]
print(beautifulSubsets(num,2))
