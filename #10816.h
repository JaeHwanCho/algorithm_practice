#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_10816() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int m;
	int temp;
	vector<int> v;
	vector<int> target;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> temp;
		auto lb = lower_bound(v.begin(), v.end(), temp);
		auto ub = upper_bound(v.begin(), v.end(), temp);

		cout << ub - lb << " ";
	}

	return 0;
}