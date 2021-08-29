#include <iostream>

using namespace std;

void hanoi(int from, int to, int n) {
	int middle = 6 - from - to;
	if (n == 1) {
		cout << from << " " << to << '\n';
		return;
	}
	hanoi(from, middle, n - 1);
	hanoi(from, to, 1);
	hanoi(middle, to, n - 1);
}

int num_11729() {
	int n;

	cin >> n;

	cout << (1 << n) - 1 << '\n';

	hanoi(1, 3, n);

	return 0;
}