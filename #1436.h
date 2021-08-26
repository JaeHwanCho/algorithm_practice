#include <iostream>

using namespace std;

int num_1436() {
	int N;
	int number = 1;
	int count = 0;
	int result;

	cin >> N;

	while (1) {
		for (int i = number; i >= 666; i /= 10) {
			if (i % 1000 == 666) {
				count++;
				break;
			}
		}

		if (count == N)
			break;

		number++;
	}

	cout << number;

	return 0;
}