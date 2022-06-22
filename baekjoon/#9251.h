#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int arr_9251[1001][1001]{};

int num_9251()
{
	string str1, str2;

	cin >> str1 >> str2;

	str1 = '0' + str1;
	str2 = '0' + str2;

	for (int i = 1; i < str1.length(); i++) {
		for (int j = 1; j < str2.length(); j++) {
			if (str1[i] == str2[j]) {
				arr_9251[i][j] = arr_9251[i - 1][j - 1] + 1;
			}
			else {
				arr_9251[i][j] = max(arr_9251[i - 1][j], arr_9251[i][j - 1]);
			}
		}
	}

	cout << arr_9251[str1.length() - 1][str2.length() - 1];

	return 0;
}