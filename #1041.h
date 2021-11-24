#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_1041() {
	long long n;
	int temp;
	long long result = 0;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < 6; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	
	if (n == 1) {
		sort(v.begin(), v.end());
		for (int i = 0; i < 5; i++)
			result += v.at(i);
	}
	else {
		v.at(0) = min(v.at(0), v.at(5));
		v.at(1) = min(v.at(1), v.at(4));
		v.at(2) = min(v.at(2), v.at(3));
		sort(v.begin(), v.begin() + 3);
		
		result += (v.at(0) + v.at(1) + v.at(2)) * 4;
		result += (v.at(0) + v.at(1)) * (8 * n - 12);
		result += v.at(0) * (5 * n * n - 16 * n + 12);
	}

	cout << result;

	return 0;
}