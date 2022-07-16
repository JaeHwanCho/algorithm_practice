#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int arr_1915[1001][1001]{};
int arr_max_1915[1001][1001]{};

int num_1915()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	string s;
	int result = 0;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> s;
		for (int j = 1; j <= m; j++) {
			arr_1915[i][j] = s[j - 1] - 48;
		}
	}

	for (int i = 1; i <= n; i++) {
		arr_max_1915[i][1] = arr_1915[i][1];
	}
	for (int i = 1; i <= m; i++) {
		arr_max_1915[1][i] = arr_1915[1][i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i == 1 && j == 1)
				continue;

			if (arr_1915[i][j] == 1) {

				arr_max_1915[i][j] = min(min(arr_max_1915[i][j - 1], arr_max_1915[i - 1][j]), arr_max_1915[i - 1][j - 1]) + 1;

			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (result < arr_max_1915[i][j]) {
				result = arr_max_1915[i][j];
			}
		}
	}

	cout << result * result;

	return 0;
}