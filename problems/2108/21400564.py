# 19-1
# 21400564 이용호
import sys

class Solution:
  def __init__(self, N, n_list) :
    self.N = N
    self.n_list = n_list

    self.ans1 = 0 # 산술평균
    self.ans2 = 0 # 중앙값
    self.ans3 = 0 # 최댓값과 최솟값의 차이
    self.ans4 = 0 # 최빈값
    self.sorted_n_list = []
  
  def solution_print(self):
    print(self.ans1)
    print(self.ans2)
    print(self.ans3)
    print(self.ans4)

  # 산술평균 
  def solution_ans1(self):
    self.ans1 = round(sum(self.n_list)/self.N)

  # 중앙값, N은 홀수라고 가정(문제 조건)
  def solution_ans2(self):
    self.sorted_n_list = sorted(self.n_list)
    self.ans2 = self.sorted_n_list[len(self.n_list)//2]

  # 최빈값
  def solution_ans3(self):
    # 딕셔너리 형태로, 빈도별로 저장
    # {숫자: 빈도}
    distribution = {}

    for i in self.sorted_n_list:
      if i in distribution:
        distribution[i] += 1
      else:
        distribution[i] = 1

    mode_list = [] # 최빈값 리스트
    max_count = 0 # 무조건 1번이상 나온다.

    # 가장 빈도(value)가 높은 숫자(key)를 찾아냄
    for i in distribution:
      if distribution[i] > max_count :
        max_count = distribution[i]

    # 최빈값 조사
    for i in distribution:
      if distribution[i] == max_count:
        mode_list.append(i)

    mode_list = sorted(mode_list)
    # 최빈값이 2개 이상이면, 두번째로 작은 것 출력
    if len(mode_list) > 1:
      self.ans3 = mode_list[1]
    else :
      self.ans3 = mode_list[0]

  # 최댓값과 최솟값의 차이
  def solution_ans4(self):
    self.ans4 = self.sorted_n_list[len(self.n_list) - 1] - self.sorted_n_list[0]

  def solution(self):
    # 산술평균
    self.solution_ans1()
    # 중앙값, N은 홀수라고 가정(문제 조건)
    self.solution_ans2()
    # 최빈값 구하는 과정
    self.solution_ans3()
    # 최댓값과 최솟값의 차이
    self.solution_ans4()

    # 솔루션 출력
    self.solution_print()


if __name__ == "__main__":
  n_list = []
  n = int(sys.stdin.readline())

  for i in range(n):
    n_list.append(int(sys.stdin.readline()))

  solution = Solution(n, n_list)
  solution.solution()