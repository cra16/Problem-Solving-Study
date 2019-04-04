#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main () {
	int N, i, j = 0;
	cout << "how many words? ";
	cin >> N;
	
	string words[N];
	string finals[N];
	for(i = 0; i < N; i++) {
		cout << "enter the word : ";
		cin >> 	words[i];
	}

	/* sort string array */
	sort(words, words+N);

	/* remove duplicated ones */
	for(i = 0; i < N; i++) {
		if (words[i] != words[i+1]) {
			finals[j] = words[i];
			j++;
		}
		else continue;
	}

	/* print */
	for(i = 0; i < N; i++) {
		cout << finals[i] << endl;
	}

	return 0;
}

