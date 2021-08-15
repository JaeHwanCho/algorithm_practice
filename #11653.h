#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int num_11653() {
	int num = 0;
	bool bo = true;

	cin >> num;
	int sq_num = sqrt(num);

	while(1) {
		bo = true;

		for (int i = 2; i <= sq_num; i++) {
			if (num % i == 0) {
				bo = false;
				num = num / i;
				if (i != 1)
					cout << i << endl;
				break;
			}
		}

		if (bo == true) {
			if (num != 1)
				cout << num << endl;
			break;
		}
	}

	return 0;
}