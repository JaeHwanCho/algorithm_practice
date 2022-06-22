#include <iostream>

using namespace std;

int num_2798() {
	int N, M;
	int card[101];
	int result = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> card[i];
	}

	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				if (card[i] + card[j] + card[k] <= M && card[i] + card[j] + card[k] > result)
					result = card[i] + card[j] + card[k];
			}
		}
	}
	cout << result;

	return 0;
}