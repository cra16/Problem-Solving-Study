#include <iostream>
#include <vector>
#include <cmath>
#include <utility>
using namespace std;

// 정렬기준
bool check(pair <int,int> &n1, pair <int,int> &n2){
  if (n1.second==n2.second) return n1.first < n2.first;
  else return n1.second > n2.second;
}

int main () {

  //라인 수 받기
  int line = 0;
  cout << "입력할 정수의 개수를 알려주세요. : " ;
  cin >> line;

  vector<int> v;
  int sum=0; // 산술평균에 쓸 합
  int num=0;

  for(int i=0; i<line; i++){
    cin >> num;
    v.push_back(num);
    sum += num;
  }
  cout << endl;

  //산술평균
  int avg = 0;
  avg = round((float)sum/line);
  cout << avg << endl;
  //중간값 출력
  sort(v.begin(),v.end());
  cout << v[line/2] << endl;
  //최빈값 출력
  vector<pair <int,int> > cnt;
  for(int i=0; i<v.size(); i++){
    if(cnt.empty()){
      cnt.push_back(pair <int,int> (v[i],1));
      continue;
    }
    if(cnt.back().first==v[i]){
      pair<int,int> st;
      st = cnt.back();
      st.second++;
      cnt.pop_back();
      cnt.push_back(st);
    }
    else{
      cnt.push_back(pair <int,int> (v[i],1));
    }
  }

  //최빈값순으로 정렬해야함.
  sort(cnt.begin(), cnt.end(), check);
  // 최빈값이 같을땐 두번째 작은 값 출력
  if (cnt[0].second == cnt[1].second)
    cout << cnt[1].first << endl;
  else
    cout << cnt[0].first << endl;

  //범위 출력
  cout << v.back()-v.front() << endl;

  return 0;
}
