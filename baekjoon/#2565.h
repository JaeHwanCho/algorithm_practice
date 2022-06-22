#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_2565()
{
	int n;
	vector<pair<int, int>> v;
	int temp_x, temp_y;
	int* arr;
	int maxx = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp_x >> temp_y;
		v.push_back(pair<int, int>(temp_x, temp_y));
	}

	sort(v.begin(), v.end());

	arr = new int[n + 1]{};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (v[i].second > v[j].second) {
				arr[i] = max(arr[i], arr[j] + 1);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (maxx < arr[i])
			maxx = arr[i];
	}

	cout << n - maxx - 1;

	return 0;
}