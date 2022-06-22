#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int num_11721() {
	string word;

	cin >> word;

	for (int i = 0; i < word.size(); i++) {
		cout << word[i];
		if ((i+1)%10 == 0 && i != 0)
			cout << endl;
	}

	return 0;
}