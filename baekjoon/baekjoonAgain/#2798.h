#include <iostream>

using namespace std;


int again_2798() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n, m;
	int arr[101];
	int result = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				if (arr[i] + arr[j] + arr[k] <= m && arr[i] + arr[j] + arr[k] > result) {
					result = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}
	cout << result;

	return 0;
}