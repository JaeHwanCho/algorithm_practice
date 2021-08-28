#include <iostream>

using namespace std;

void square(int x, int y, int n) {
	if (x % 3 == 1 && y % 3 == 1)
		cout << " ";
	else if (n / 3 == 1)
		cout << "*";
	else
		square(x / 3, y / 3, n / 3);
}

int num_2447() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			square(i, j, n);
		}
		cout << "\n";
	}

	return 0;
}