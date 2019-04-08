#include <iostream>
using namespace std;
int main () {
	int M, N = 0;
	cout << "enter M, N: ";
	cin >> M >> N;
	int i, cnt = 0;
	int j = 1;
	for (i = M; i <=N; i++) {
		if (i == 1) continue;
		else if (i == 2) { cnt++; continue; }
		for(j = 2; j < i; j++) {
			// j will increase from 2 to i
			// if i can be divided by j, it's not prime -> break
			if( (i%j) == 0) break;
		}
		// if j equals to i, it means it hasn't call break func at all
		// meaning, it's prime number
		if (j == i) cnt++;
	}
	cout << "number of prime number between " << M << " and " << N << ": " << cnt << endl;
	return 0;
}
