#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_2775()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int a, b;
	int arr[15][15]{};

	cin >> n;

	for (int i = 0; i < 15; i++) {
		arr[i][1] = 1;
	}

	for (int i = 1; i < 15; i++) {
		arr[0][i] = i;
	}

	for (int t = 0; t < n; t++) {
		cin >> a >> b;
		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {
				arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
			}
		}
		cout << arr[a][b] << "\n";
	}

	return 0;
}