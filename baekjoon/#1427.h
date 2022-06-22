#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int num_1427() {
	int n;
	int temp;
	vector<int> v;

	cin >> n;
	while (n > 10) {
		temp = n % 10;
		n /= 10;
		v.push_back(temp);
	}
	v.push_back(n);

	sort(v.begin(), v.end(), greater<int> ());

	for (int i = 0; i < v.size(); i++) {
		cout << v.at(i);
	}

	return 0;
}