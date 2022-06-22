#include <stdio.h>
#include <iostream>

using namespace std;

int num_1978() {
	int count = 0;
	int num = 0;
	bool bo = true;
	int t = 0;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> num;
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
			t++;
		}
	}
	cout << t;

	return 0;
}