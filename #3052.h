#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_3052()
{
	int temp;
	vector<int> v;

	for (int i = 0; i < 10; i++) {
		cin >> temp;
		v.push_back(temp % 42);
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	cout << v.size();

	return 0;
}