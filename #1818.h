#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <queue>

using namespace std;

int num_1818()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int x;
	int idx;
	vector<int> v;

	cin >> n;
	v.push_back(-1);

	for (int i = 0; i < n; i++) {
		cin >> x;

		if (v.back() < x)
			v.push_back(x);
		else {
			idx = lower_bound(v.begin(), v.end(), x) - v.begin();
			v[idx] = x;
		}
	}
	cout << n - v.size() + 1 << '\n';

	return 0;
}