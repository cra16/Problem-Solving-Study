#include <iostream>
#include <vector>

using namespace std;

bool isprime(int n) {
  if(n < 2) return false;
  for(int i=2; i*i<=n; i++){
    if (n%i == 0)
      return false;
  }
  return true;
}

int main() {
  int N = 0;
  vector<int> v;
  while(1){
    int cnt = 0;
    cin >> N;
    if(N==0) break;
    for(int i=N+1;i<=2*N;i++){
      if(isprime(i)) cnt++;
    }
    v.push_back(cnt);
  }

  for(int i=0;i<v.size();i++){
    cout << v[i] << endl;
  }

  return 0;
}
