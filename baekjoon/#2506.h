#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int num_2506() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, temp, score = 0, result = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;

		if (temp == 1) {
			score++;
			result += score;
		}
		else {
			score = 0;
		}
	}
	cout << result;

	return 0;
}