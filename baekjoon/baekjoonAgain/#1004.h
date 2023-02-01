#include <iostream>

using namespace std;

int again_1004() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t, x1, y1, x2, y2, n;
	int x[50], y[50], r[50];
	int result;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> x2 >> y2;

		cin >> n;

		for (int j = 0; j < n; j++) {
			cin >> x[j] >> y[j] >> r[j];
		}

		result = 0;

		for (int k = 0; k < n; k++) {
			bool check_st = false;
			bool check_de = false;

			if ((r[k] * r[k]) > ((x1 - x[k]) * (x1 - x[k]) + (y1 - y[k]) * (y1 - y[k]))) {
				check_st = true;
			}

			if ((r[k] * r[k]) > ((x2 - x[k]) * (x2 - x[k]) + (y2 - y[k]) * (y2 - y[k]))) {
				check_de = true;
			}

			if (check_st && !check_de) {
				result++;
			}
			else if (!check_st && check_de) {
				result++;
			}
		}
		cout << result << "\n";
	}
	return 0;
}