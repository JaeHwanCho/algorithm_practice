#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_11866() {
	int n, k;
	int idx = 0;
	vector<int> v;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}

	cout << "<";
	while (v.size() != 0) {
		idx += k - 1;

		while (idx >= v.size()) {
			idx -= v.size();
		}
		if (v.size() == 1)
			cout << v.at(idx);
		else
			cout << v.at(idx) << ", ";

		v.erase(v.begin() + idx);

	}
	cout << ">";

	return 0;
}