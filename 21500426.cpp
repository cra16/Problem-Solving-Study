#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

double getave(int * arr, int len);
int getmean(int * arr, int len);
int getmode(int * arr, int len);
int getrange(int * arr, int len);

int main() {
	double ave, mean, mode, range = 0;
	int N;

	cout << "enter length of list : ";
	cin >> N;

	int * arr = new int[N];

	for(int i = 0; i < N; i++){
		cout << "enter " << i+1 << "th value : ";
		cin >> arr[i];
	}
	ave = getave(arr, N);
	mean = getmean(arr, N);
	mode = getmode(arr, N);
	range = getrange(arr, N);

	cout << "ave : " << ave << endl;
	cout << "mean : " << mean << endl;
	cout << "mode : " << mode << endl;
	cout << "range : " << range << endl;

	delete[] arr;
	return 0;
}

double getave(int * arr, int len) {
	double result = 0;
	for(int i = 0; i < len; i++){
		result += arr[i];
	}
	result /= (double)len;
	return result;
}

int getmean(int * arr, int len) {
	// sort in ascending order
	sort(arr, arr+len);	

	// find the middle value from sorted list
	int i = len/2;
	return arr[i];
}

int getmode(int * arr, int len) {
	// traverse through array
	// have counting variable for each value

	int cntlen = arr[len-1]+1;
	int * cnt = new int[cntlen];
	int * modes = new int[cntlen];
	int mode = 0;	
	// initialize
	for(int i = 0; i < cntlen; i++) {
		cnt[i] = 0;
		modes[i] = 0;
	}

	// count
	for(int i = 0; i < len; i++) {
		cnt[arr[i]]++;
	}

	/* test print
	   for(int i = 0; i < cntlen; i++) {
	   cout << "cnt [" << i << "] : " << cnt[i] << endl;
	   }
	 */	

	// compare maximum counting variable and return that value
	int max =  INT_MIN;
	for(int i = 0; i < cntlen; i++) {
		if(cnt[i] >  max) max = cnt[i];
		if(cnt[i] == max) modes[i] = i;
	}
	sort(modes, modes+cntlen, greater<int>());

	/* test print
	   for(int i = 0; i < cntlen; i++) {
	   cout << "modes[" << i << "] : " << modes[i] << endl;
	   }
	 */

	mode = modes[1];
	return mode;
}

int getrange(int * arr, int len) {
	// it's already sorted
	// max - min
	return arr[len-1] - arr[0];
}
