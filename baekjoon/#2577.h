#include <iostream>

using namespace std;

int num_2577()
{
	int temp;
	int num = 1;
	int result[10]{};

	for (int i = 0; i < 3; i++) {
		cin >> temp;
		num *= temp;
	}

	for (int k = num; k > 0; k /= 10) {
		temp = k % 10;
		result[temp]++;
	}

	for (int i = 0; i < 10; i++) {
		cout << result[i] << "\n";
	}

	return 0;
}