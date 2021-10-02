#include <iostream>
#include <algorithm>

using namespace std;

int num_11053()
{
	int n;
	int* arr;
	int* arr_max;
	int res = 1;

	cin >> n;
	arr = new int[n + 1]{};
	arr_max = new int[n + 1]{};

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		arr_max[i] = 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j] && arr_max[i] < arr_max[j] + 1)
				arr_max[i] = arr_max[j] + 1;
		}
		if (arr_max[i] > res)
			res = arr_max[i];
	}
	cout << res;

	return 0;
}