#include <stdio.h>
#include <iostream>

using namespace std;

int num_1652() {
	int N;
	char box[100][100];
	int garo_result;
	int sero_result;
	int t = 0;

	scanf("%d", &N);
	garo_result = 0;
	sero_result = 0;


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> box[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (box[i][j] == '.') {
				if (box[i][j + 1] == '.') {
					t = 1;
					while (1) {
						if (box[i][j + t] == 'X') {
							garo_result++;
							j = j + t;
							break;
						}
						t++;
						if (j + t > N)
							break;
						if (j + t == N) {
							garo_result++;
							j = j + t;
							break;
						}
					}
				}
			}
		}
	}
	for (int j = 0; j < N; j++) {
		for (int i = 0; i < N; i++) {
			if (box[i][j] == '.') {
				if (box[i + 1][j] == '.') {
					t = 1;
					while (1) {
						if (box[i + t][j] == 'X') {
							sero_result++;
							i = i + t;
							break;
						}
						t++;
						if (i + t > N)
							break;
						if (i + t == N) {
							sero_result++;
							i = i + t;
							break;
						}
					}
				}
			}
		}
	}
	cout << garo_result << " " << sero_result;

	return 0;
}