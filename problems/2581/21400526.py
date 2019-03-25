M = int(input())
N = int(input())
prime_list = []

for i in range(M, N+1):
    c = 0
    for j in range(1, i+1):
        if i % j == 0:
            c += 1
            if c > 2:
                break
    if c == 2:
        prime_list.append(i)

if prime_list == []:
    print(-1)
else:
    print(sum(prime_list))
    print(min(prime_list))
