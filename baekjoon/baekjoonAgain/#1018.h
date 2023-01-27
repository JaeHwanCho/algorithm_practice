#include <iostream>

using namespace std;

int again_1018() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n, m, temp, count, result = 999999;
	char a[51][51];

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			if (a[i][j] == 'W') {
				count = 0;
				temp = -1;
				for (int k = 0; k < 8; k++) {
					for (int l = 0; l < 8; l++) {
						if (temp == -1) {
							if (a[i + k][j + l] == 'B') {
								count++;
							}
						}
						if (temp == 1) {
							if (a[i + k][j + l] == 'W') {
								count++;
							}
						}
						temp *= -1;
					}
					temp *= -1;
				}
				if (count > 32) {
					count = 64 - count;
				}
				if (result > count) {
					result = count;
				}
			}
			if (a[i][j] == 'B') {
				count = 0;
				temp = 1;
				for (int k = 0; k < 8; k++) {
					for (int l = 0; l < 8; l++) {
						if (temp == -1) {
							if (a[i + k][j + l] == 'B') {
								count++;
							}
						}
						if (temp == 1) {
							if (a[i + k][j + l] == 'W') {
								count++;
							}
						}
						temp *= -1;
					}
					temp *= -1;
				}
				if (count > 32) {
					count = 64 - count;
				}
				if (result > count) {
					result = count;
				}
			}
		}
	}

	cout << result;

	return 0;
}