#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int arr_11660[1025][1025]{};
int arr_sum_11660[1025][1025]{};

int num_11660()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	int x1, x2, y1, y2;

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr_11660[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		arr_sum_11660[i][0] = arr_11660[i][0] + arr_sum_11660[i - 1][0];
		arr_sum_11660[0][i] = arr_11660[0][i] + arr_sum_11660[0][i - 1];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			arr_sum_11660[i][j] = arr_sum_11660[i - 1][j] + arr_sum_11660[i][j - 1] - arr_sum_11660[i - 1][j - 1] + arr_11660[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		cout << arr_sum_11660[x2][y2] - arr_sum_11660[x1 - 1][y2] - arr_sum_11660[x2][y1 - 1] + arr_sum_11660[x1 - 1][y1 - 1] << "\n";
	}


	return 0;
}