#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int num_11399(void) {
	int n = 0;
	vector<int> v;
	int temp;
	int result = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			result += v[j];
		}
	}

	cout << result;

    return 0;
}