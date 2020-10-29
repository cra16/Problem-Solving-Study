#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
bool compare (string& first, string& second) {
	return first.size() < second.size();
}
int main () {
	vector <string> words;
	vector <string>::iterator stash;
	int N, i, j = 0;
	string word = "";
	cout << "how many words? ";
	cin >> N;
	
	/* push data to vector */
	for(i = 0; i < N; i++) {
		cout << "enter the word : ";
		cin >> word;
		words.push_back(word);
	}


	/* sort */
	sort(words.begin(), words.end());

	/* remove duplicates */
	words.erase(unique(words.begin(), words.end()), words.end());

	/* sort by length */
	sort(words.begin(), words.end(), compare);

	/* print */
	for(i = 0; i < words.size(); i++) {
		cout << words[i] << endl;
	}

	return 0;
}

