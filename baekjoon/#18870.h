#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_18870() {
	int count;
	int temp_val;
	vector<int> v;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> temp_val;
		v.push_back(temp_val);
	}

	vector<int> sort_v(v);
	sort(sort_v.begin(), sort_v.end());
	sort_v.erase(unique(sort_v.begin(), sort_v.end()), sort_v.end());

	for (int i = 0; i < v.size(); i++) {
		auto it = lower_bound(sort_v.begin(), sort_v.end(), v[i]);
		cout << it - sort_v.begin() << " ";
	}

	return 0;
}