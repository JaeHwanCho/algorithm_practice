#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int num_1157()
{
	string str;
	int alphabet[27]{};
	int temp;
	int max = 0;
	bool check = true;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		temp = toupper(str[i]) - 'A';
		alphabet[temp]++;
	}

	for (int i = 1; i < 27; i++) {
		if (alphabet[max] < alphabet[i]) {
			max = i;
		}
	}

	for (int i = 0; i < 27; i++) {
		if (alphabet[max] == alphabet[i] && max != i)
			check = false;
	}
	   
	if (check == false) {
		cout << "?";
	}
	else {
		cout << (char)(65 + max);
	}

	return 0;
}