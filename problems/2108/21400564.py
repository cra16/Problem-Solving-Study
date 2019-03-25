# 19-1
# 21400564 이용호
import sys

class Solution:
  def __init__(self) :
    self.ans1 = 0
    self.ans2 = 0 
    self.ans3 = 0
    self.ans4 = 0
    self.distribution = {}
    pass
  
  def solution(self, N, NList):
    # 산술평균
    self.ans1 = round(sum(NList)/N)
    sortedNList = sorted(NList)

    # 중앙값, N은 홀수라고 가정
    self.ans2 = sortedNList[len(NList)//2]

    # 최댓값과 최솟값의 차이
    self.ans4 = sortedNList[len(NList) - 1] - sortedNList[0]

    # 최빈값 구하는 과정
    # 딕셔너리 형태로, 빈도별로 저장
    # {숫자: 빈도}
    for i in sortedNList:
      if i in self.distribution:
        self.distribution[i] += 1
      else:
        self.distribution[i] = 1
    temp = []
    maxValue = -9999999
    # 빈도 중에서 가장 큰 숫자를 찾아냄
    for i in self.distribution:
      if self.distribution[i] > maxValue :
        maxValue = self.distribution[i]
    # 최빈값 조사
    for i in self.distribution:
      if self.distribution[i] == maxValue:
        temp.append(i)
    temp = sorted(temp)
    # print(temp)

    print(self.ans1)
    print(self.ans2)
    # 최빈값이 2개 이상이면, 두번째로 작은 것 출력
    if len(temp) > 1:
      print(temp[1])
    else :
      print(temp[0])
    print(self.ans4)


if __name__ == "__main__":
  N = int(sys.stdin.readline())
  NList = []
  for i in range(N):
    NList.append(int(sys.stdin.readline() ))
  Solution().solution(N, NList)