#include <iostream>
#include <algorithm>

using namespace std;

int num_2559() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	int temp;
	int arr[100001]{};

	cin >> n >> k;

	cin >> arr[0];

	for (int i = 1; i < n; i++) {
		cin >> temp;

		arr[i] = temp + arr[i - 1];
	}

	temp = arr[k - 1];

	for (int i = k; i < n; i++) {
		if (temp < arr[i] - arr[i - k]) {
			temp = arr[i] - arr[i - k];
		}
	}

	cout << temp;

	return 0;
}