#include <iostream>

using namespace std;

int num_2292() {
	int n;

	cin >> n;
	int i = 0;
	int j = 2;
	int k = 1;

	if (n == 1) {
		cout << "1";
		return 0;
	}

	for (i = 0; i < 6 * n; i += 6) {
		j += i;
		if (j > n) {
			cout << k;
			return 0;
		}
		k++;
	}

	return 0;
}