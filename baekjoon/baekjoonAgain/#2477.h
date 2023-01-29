#include <iostream>\

using namespace std;

int again_2477() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int k;
	int arr[6][2];
	int dir[5]{};

	int big_result = 1;
	int small_result = 1;

	cin >> k;

	for (int i = 0; i < 6; i++) {
		cin >> arr[i][0] >> arr[i][1];
		dir[arr[i][0]]++;
	}

	for (int i = 0; i < 6; i++) {
		if (dir[arr[i][0]] == 1) {
			big_result *= arr[i][1];
		}
		else {
			if (arr[i][0] == arr[(i + 2) % 6][0]) {
				small_result *= arr[(i + 1) % 6][1];
			}
		}
	}

	cout << (big_result - small_result) * k;

	return 0;
}