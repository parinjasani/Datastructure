print("Hello, World!")

n = int(input())

count1 = 0

prime = []

for i in range(1, n + 1):
    count = 0
    for j in range(1, i + 1):
        if (i % j == 0):
            count = count + 1
    if count == 2:
        prime.append(i)

print(prime)

for i in range(len(prime)):

    for j in range(i, len(prime)):

        if prime[i] + prime[j] == n:
            print(prime[i],prime[j])
            count1 = count1 + 1

if (count1 == 0):
    count1 = -1

print(count1)