#include <iostream>
#include <algorithm>

using namespace std;

int num_1912()
{
	int n;
	int* arr;
	int* sum;
	int maxx = -9999;

	cin >> n;

	arr = new int[n + 2]{};
	sum = new int[n + 2]{};

	arr[0] = -9999;
	sum[0] = -9999;

	for (int i = 1; i < n + 1; i++) {
		cin >> arr[i];
		sum[i] = arr[i];
	}

	for (int i = 1; i < n + 1; i++) {
		if (sum[i - 1] + arr[i] > arr[i])
			sum[i] = sum[i - 1] + arr[i];
	}

	for (int i = 1; i < n + 1; i++) {
		if (sum[i] > maxx)
			maxx = sum[i];
	}

	cout << maxx;

	return 0;
}