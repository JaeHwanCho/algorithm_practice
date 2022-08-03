#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int num_1731() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int arr[50]{};

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	bool isAdd = true;
	for (int i = 0; i < n - 2; i++) {
		if (arr[i + 1] - arr[i] != arr[i + 2] - arr[i + 1]) {
			isAdd = false;
			break;
		}
	}
	if (isAdd) {
		cout << arr[n - 1] + arr[1] - arr[0];
	}
	else {
		cout << arr[n - 1] * (arr[1] / arr[0]);
	}

	return 0;
}