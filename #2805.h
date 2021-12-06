#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_2805() {
	int n, m;
	long long temp;
	vector<long long> v;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());

	long long start = 1;
	long long end = v[n - 1];
	long long mid = (start + end) / 2;
	long long ans = 0;
	while (start <= end) {
		mid = (start + end) / 2;
		long long sum = 0;

		for (int i = 0; i < n; i++) {
			if (v[i] - mid > 0)
				sum += v[i] - mid;
		}
		if (sum >= m) {
			start = mid + 1;
			ans = mid;
		}
		else {
			end = mid - 1;
		}
	}
	cout << ans;

	return 0;
}