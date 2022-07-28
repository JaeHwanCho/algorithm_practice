#include <iostream>
#include <algorithm>

using namespace std;

int arr_11049[501][501];

int num_11049() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int row[501];
	int col[501];

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> row[i] >> col[i];
	}
	for (int step = 1; step < n; step++) {
		for (int start = 1; start + step <= n; start++) {

			arr_11049[start][start + step] = 2000000000;

			for (int mid = start; mid < start + step; mid++) {

				arr_11049[start][start + step] = min(arr_11049[start][start + step], arr_11049[start][mid] + arr_11049[mid + 1][start + step] + row[start] * col[start + step] * col[mid]);

			}

		}
	}
	cout << arr_11049[1][n];
	
	return 0;
}