#include <iostream>

using namespace std;

int num_2562()
{
	int n[10];
	int max = 0;
	int max_num = -1;

	for (int i = 0; i < 9; i++) {
		cin >> n[i];
		if (n[i] > max) {
			max = n[i];
			max_num = i + 1;
		}
	}

	cout << max << "\n" << max_num;

	return 0;
}