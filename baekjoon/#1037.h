#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_1037()
{
	int n;
	int temp;
	vector<int> v;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	cout << v[0] * v[n - 1];

	return 0;
}