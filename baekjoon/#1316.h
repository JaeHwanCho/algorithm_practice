#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int num_1316() {
	int count;
	int alpha_count;
	int result = 0;
	string word;
	char alphabet[26];
	char temp;
	bool bo;
	bool result_bo;

	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> word;
		alpha_count = 0;
		for (int ac = 0; ac < 26; ac++) {
			alphabet[ac] = 0;
		}
		result_bo = true;
		for (int j = 0; j < word.size(); j++) {
			if (j == 0) {
				alphabet[alpha_count] = word[0];
				alpha_count++;
			}
			temp = word[j];
			for (int k = 0; k < alpha_count; k++) {
				bo = false;
				if (temp == alphabet[k]) {
					bo = true;
					if (k != alpha_count - 1) {
						result_bo = false;
						break;
					}
				}
				
			}
			if (bo == false && j != 0) {
				alphabet[alpha_count] = word[j];
				alpha_count++;
			}

			if (result_bo == false)
				break;
			if (j == word.size() - 1) {
				result++;
			}
		}
	}

	cout << result;

	return 0;
}