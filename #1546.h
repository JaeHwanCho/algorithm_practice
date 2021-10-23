#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_1546()
{
	int count = 0;
	float sub[1001];
	int max_sub = 0;
	float avg = 0;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> sub[i];
		if (sub[i] > max_sub)
			max_sub = sub[i];
	}
	for (int i = 0; i < count; i++) {
		sub[i] = sub[i] / max_sub * 100;
		avg += sub[i];
	}
	avg /= count;

	cout << avg;

	return 0;
}