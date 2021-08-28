#include <iostream>
#include <algorithm>

using namespace std;

int num[1000001];

int num_2751() {
	int count;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> num[i];
	}

	sort(num, num + count);

	for (int i = 0; i < count; ++i)
		cout << num[i] << " ";

	return 0;
}