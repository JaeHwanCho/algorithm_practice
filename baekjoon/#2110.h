#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_2110()
{
	int n, c;
	int temp;
	vector<int> v;

	cin >> n >> c;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());

	int start = 1;
	int end = v[n - 1];
	int ans = 0;

	while (start <= end) {
		int mid = (start + end) / 2;
		int sum = 1;
		int before_pos = 0;

		for (int i = 1; i < n; i++) {
			if (v[i] - v[before_pos] >= mid) {
				before_pos = i;
				sum++;
			}
		}
		if (sum >= c) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
		if (ans < mid && sum >= c)
			ans = mid;
	}
	cout << ans;

	return 0;
}