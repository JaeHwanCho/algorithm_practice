#include <stdio.h>

using namespace std;

int num_1024() {
	int N, L;
	int arr[100];
	int temp;
	int i = 0;

	scanf("%d %d", &N, &L);
	
	while (1) {
		if (L % 2 == 0) { // Â¦¼ö°³

			if ((N/L + N/L + 1)*L == N * 2) {
				temp = L / 2;
				if (N / L - temp + 1 >= 0) {
					while (temp != 0) {
						arr[i] = N / L - temp + 1;
						temp--;
						i++;
					}
					for (int j = 0; j < L / 2; j++) {
						arr[i] = N / L + 1 + j;
						i++;
					}
					break;
				}
			}
		}

		if (L % 2 == 1) { // È¦¼ö°³
			if (N % L == 0) {
				temp = L / 2;
				if (N / L - temp >= 0) {
					while (temp != 0) {
						arr[i] = N / L - temp;
						temp--;
						i++;
					}
					for (int j = 0; j < L / 2 + 1; j++) {
						arr[i] = N / L + j;
						i++;
					}
					break;
				}
			}
		}
		L++;
		if (L > 100) {
			printf("-1");
			return 0;
		}
	}
	for (int k = 0; k < i; k++) {
		printf("%d ", arr[k]);
	}

	return 0;
}