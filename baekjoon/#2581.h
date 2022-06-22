#include <stdio.h>
#include <iostream>

using namespace std;

int num_2581() {
	int M, N;
	int num = 0;
	bool bo = true;
	int count = 0;
	int result[10000];
	int sum = 0;

	cin >> M >> N;

	for (int i = 0; i < N-M+1; i++) {
		num = M + i;
		bo = true;
		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				bo = false;
				break;
			}
		}
		if (num == 1)
			bo = false;
		if (bo == true) {
			result[count] = num;
			count++;
		}
	}
	for (int i = 0; i < count; i++) {
		sum += result[i];
	}
	if (sum == 0) {
		cout << "-1" << endl;
		return 0;
	}

	cout << sum << "\n" << result[0] << endl;

	return 0;
}