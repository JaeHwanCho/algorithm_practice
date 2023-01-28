#include <iostream>

using namespace std;

int again_1436() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int result = 665;
	int count = 0;

	cin >> n;

	while (count < n) {
		result++;

		for (int i = result; i >= 666; i /= 10) {
			if (i % 1000 == 666) {
				count++;
				break;
			}
		}
	}

	cout << result;

	return 0;
}