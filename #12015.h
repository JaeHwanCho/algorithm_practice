#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_12015()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int temp;
	int idx;
	vector<int> v;

	cin >> n;
	v.push_back(0);

	for (int i = 0; i < n; i++) {
		cin >> temp;

		idx = lower_bound(v.begin(), v.end(), temp) - v.begin();
		
		if (idx == v.size())
			v.push_back(temp);
		else
			v[idx] = temp;
	}
	
	cout << v.size() - 1;

	return 0;
}