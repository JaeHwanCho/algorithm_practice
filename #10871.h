#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_10871()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x, temp;
	vector<int> v;

	cin >> n >> x;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp < x)
			v.push_back(temp);
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	return 0;
}