#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_1654()
{
	int k, n;
	long long temp;
	vector<long long> v;
	
	cin >> k >> n;

	for (int i = 0; i < k; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());

	long long start = 1;
	long long end = v[k - 1];
	long long mid = (start + end) / 2;
	
	while (start <= end) {
		int count = 0;
		for (int i = 0; i < k; i++) {
			count += v[i] / mid;
		}
		if (count >= n) {
			start = mid + 1;
			mid = (start + end) / 2;
		}
		else {
			end = mid - 1;
			mid = (start + end) / 2;
		}
	}
	cout << mid;

	return 0;
}