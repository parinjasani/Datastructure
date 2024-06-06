def rob(arr):
    if len(arr) < 2:
        return arr[0], [1]

    dp = []
    dp.append((arr[0], [1]))

    if arr[1] > arr[0]:
        dp.append((arr[1], [2]))
    else:
        dp.append((arr[0], [1]))

    for i in range(2, len(arr)):
        if dp[i - 2][0] + arr[i] > dp[i - 1][0]:
            new_loot = dp[i - 2][0] + arr[i]
            new_selected_houses = dp[i - 2][1] + [i + 1]
        else:
            new_loot = dp[i - 1][0]
            new_selected_houses = dp[i - 1][1]

        dp.append((new_loot, new_selected_houses))

    return dp[len(arr) - 1]

def maxirob(arr):
    if len(arr)==0:
        return 0
    if len(arr) < 2:
        return arr[0], [1]

    skiplasthouse = []
    skipfirsthouse = []

    for i in range(len(arr)):
        if i < len(arr) - 1:
            skiplasthouse.append(arr[i])
        if i > 0:  # Fix the indexing here
            skipfirsthouse.append(arr[i])

    lootskipinglast, selected_houses_skiplast = rob(skiplasthouse)
    lootskipingfirst, selected_houses_skipfirst = rob(skipfirsthouse)

    if lootskipingfirst >= lootskipinglast:
        if selected_houses_skipfirst[0] != 1:  # Check if the first house is skipped
            selected_houses_skipfirst = [i for i in selected_houses_skipfirst]
            return lootskipingfirst, selected_houses_skipfirst
    else:
        selected_houses_skiplast = [i-1  for i in selected_houses_skiplast]
        return lootskipinglast, selected_houses_skiplast



    # If the first house is not skipped in both cases, return the one with the larger loot
    return max(lootskipingfirst, lootskipinglast), selected_houses_skipfirst

arr = list(map(int, input().strip().split()))
loot, selected_houses = maxirob(arr)
print(loot)
for i in range(0,len(selected_houses)):
    selected_houses[i]+=1
print(selected_houses)