#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int num_11066() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int testCase;
	int arr[501]{};
	int dp[501][501]{};
	int sum[501]{};

	cin >> testCase;

	for (int test = 0; test < testCase; test++) {

		int n;
		cin >> n;

		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
			sum[i] = sum[i - 1] + arr[i];
		}

		for (int size = 1; size <= n; size++) {
			for (int i = 1; i <= n - size; i++) {

				dp[i][i + size] = 2000000000;

				for (int k = i; k < i + size; k++) {

					dp[i][i + size] = min( dp[i][i + size], dp[i][k] + dp[k + 1][i + size] + sum[i + size] - sum[i - 1] );

				}
			}

		}

		cout << dp[1][n] << "\n";
	}

	return 0;
}