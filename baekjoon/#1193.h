#include <iostream>

using namespace std;

int num_1193() {
	int n;
	int i = 1;
	int result;

	cin >> n;

	while (1) {
		if (n <= i * (i + 1) / 2) {
			break;
		}
		i++;
	}

	result = 1 - n + (i * (i + 1) / 2);
	
	if (i % 2 == 1) {
		cout << result << "/" << i + 1 - result;
	}
	else {
		cout << i + 1 - result << "/" << result;
	}

	return 0;
}