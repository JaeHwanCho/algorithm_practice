#include <iostream>
#include <algorithm>

using namespace std;

int num_11054()
{
	int n;
	int* arr;
	int* arr_up;
	int* arr_down;
	int res = 1;

	cin >> n;
	arr = new int[n + 1]{};
	arr_up = new int[n + 1]{};
	arr_down = new int[n + 1]{};

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		arr_up[i] = 1;
		arr_down[i] = 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j] && arr_up[i] < arr_up[j] + 1)
				arr_up[i] = arr_up[j] + 1;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		for (int j = n - 1; j > i; j--) {
			if (arr[i] > arr[j] && arr_down[i] < arr_down[j] + 1)
				arr_down[i] = arr_down[j] + 1;
		}
	}
	for (int i = 0; i < n; i++) {
		if (res < arr_up[i] + arr_down[i] - 1) {
			res = arr_up[i] + arr_down[i] - 1;
		}
	}

	cout << res;

	return 0;
}