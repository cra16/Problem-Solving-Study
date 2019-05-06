import sys

N = int(sys.stdin.readline())
L = []

for i in range(N):
  L.append(sys.stdin.readline()[:-1])

L = sorted(L)
L = sorted(L, key=lambda x : len(x))

last_word = ''
for i in L :
  if last_word != i :
    print(i)

  last_word = i
