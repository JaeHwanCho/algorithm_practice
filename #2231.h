#include <iostream>

using namespace std;

int num_2231() {
	int N;
	int temp;
	int result = 0;
	int i;
	bool a = false;

	cin >> N ;

	for (i = 1; i < N; i++) {
		result = i;
		for (int j = i; j != 0; j /= 10) {
			temp = j % 10;
			result += temp;
		}
		if (result == N) {
			a = true;
			break;
		}
	}
	if (a == false)
		i = 0;
	cout << i;

	return 0;
}