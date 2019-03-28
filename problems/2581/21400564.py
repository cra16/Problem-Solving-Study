# 19-1
# 21400564 이용호
import time
import sys

class Solution :
  def __init__(self):
    self.primeList = [2]
    pass

  def makePrimeList(self, x):
    for i in self.primeList :
      if x % i == 0 :
        return False
    self.primeList.append(x)
    return True

  def test(self, M, N):
    for i in range(2, N+1):
      self.makePrimeList(i)
    minValue = -1
    for i in range(M, N+1):
      if i in self.primeList:
        minValue = i
        break
    if minValue == -1 :
      print(-1)
      return False

    minValueIndex = self.primeList.index(minValue)
    sumOfSolutions = sum([self.primeList[x] for x in range(minValueIndex, len(self.primeList))])

    # print solution
    print(sumOfSolutions)
    print(self.primeList[minValueIndex])

if __name__ == "__main__":
  input1 = int(sys.stdin.readline())
  input2 = int(sys.stdin.readline())

  solution = Solution()

  # start_time = time.time()
  solution.test(input1, input2)
  # print("--- %s seconds ---" %(time.time() - start_time))

