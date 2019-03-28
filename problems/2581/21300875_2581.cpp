#include <iostream>
#include <algorithm>

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
  int m = 0, n = 0;
  cin >> m;
  cin >> n;

  int sum = 0, min = 10000;

  for (int i = m; i < n+1; i++){
      if(isprime(i)){
        sum+=i;
        if(min>i) min=i;
      }
  }
  if(min==10000) cout << -1 <<endl;
  else {
    cout << sum << endl;
    cout << min << endl;
  }

  return 0;
}
