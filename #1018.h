#include <iostream>

using namespace std;

int num_1018() {
	int N;
	int M;
	char a[51][51];
	int choice = -1;
	int N_limit;
	int M_limit;
	int result = 9999;
	int color_temp;
	int count;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> a[i][j];
		}
	}

	N_limit = N - 7;
	M_limit = M - 7;
	for (int i = 0; i < N_limit; i++) {
		for (int j = 0; j < M_limit; j++) {
			switch (a[i][j]) {
			case 'W':
				count = 0;
				color_temp = 0;
				for (int k = 0; k < 8; k++) {
					for (int l = 0; l < 8; l++) {
						if (color_temp == 0) {	// white
							if (a[i + k][j + l] == 'B') {
								count++;
							}
						}
						if (color_temp == 1) {	// black
							if (a[i + k][j + l] == 'W') {
								count++;
							}
						}
						color_temp = 1 - color_temp;
					}
					color_temp = 1 - color_temp;
				}
				if (count > 32)
					count = 64 - count;
				if (result > count)
					result = count;
				break;

			case 'B':
				count = 0;
				color_temp = 1;
				for (int k = 0; k < 8; k++) {
					for (int l = 0; l < 8; l++) {
						if (color_temp == 0) {	// white
							if (a[i + k][j + l] == 'B') {
								count++;
							}
						}
						if (color_temp == 1) {	// black
							if (a[i + k][j + l] == 'W') {
								count++;
							}
						}
						color_temp = 1 - color_temp;
					}
					color_temp = 1 - color_temp;
				}
				if (count > 32)
					count = 64 - count;
				if (result > count)
					result = count;
				break;

			}
		}
	}
	cout << result;

	return 0;
}