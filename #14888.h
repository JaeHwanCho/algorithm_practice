#include <iostream>

using namespace std;

int nums_14888[12];
int sign_14888[5];
int mmin_14888 = 1000000000;
int mmax_14888 = -1000000000;

void cal_14888(int N, int temp, int cnt) {
	if (N == cnt) {
		if (temp > mmax_14888)
			mmax_14888 = temp;
		if (temp < mmin_14888)
			mmin_14888 = temp;
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (sign_14888[i] > 0) {
			sign_14888[i]--;
			if (i == 0)
				cal_14888(N + 1, temp + nums_14888[N], cnt);
			else if (i == 1)
				cal_14888(N + 1, temp - nums_14888[N], cnt);
			else if (i == 2)
				cal_14888(N + 1, temp * nums_14888[N], cnt);
			else
				cal_14888(N + 1, temp / nums_14888[N], cnt);
			sign_14888[i]++;
		}
	}
}

int num_14888()
{
	int cnt;
	cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		cin >> nums_14888[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> sign_14888[i];
	}

	cal_14888(1, nums_14888[0], cnt);

	cout << mmax_14888 << "\n" << mmin_14888;
	
	return 0;
}