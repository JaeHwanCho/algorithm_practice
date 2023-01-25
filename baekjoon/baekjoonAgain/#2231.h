#include <iostream>

using namespace std;

int again_2231() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;

	cin >> n;

	for (int i = 1; i < n; i++) {
		int result = i;
		int j = i;

		while (j != 0) {
			result += j % 10;
			j /= 10;
		}

		if (result == n) {
			cout << i;

			return 0;
		}
	}
	cout << 0;

	return 0;
}