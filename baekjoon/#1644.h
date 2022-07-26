#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <deque>

using namespace std;

bool arr_1644[4000001]{};

int num_1644() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	long long temp = 0;
	vector<long long> v;
	
	cin >> n;

	arr_1644[0] = true;
	arr_1644[1] = true;

	for (int i = 2; i <= n; i++) {
		if (arr_1644[i])
			continue;
		for (int j = i * 2; j <= n; j += i) {
			arr_1644[j] = true;
		}
	}
	v.push_back(0);
	for (int i = 2; i <= n; i++) {
		if (!arr_1644[i]) {
			temp += i;
			v.push_back(temp);
		}
	}
	int onePoint = v.size() - 2;
	int twoPoint = v.size() - 1;

	temp = 0;

	while (onePoint >= 0) {
		if (onePoint == twoPoint) {
			onePoint--;
			continue;
		}
		int result = v[twoPoint] - v[onePoint];

		if (result == n) {
			temp++;
			twoPoint--;
		}
		else if (result > n) {
			twoPoint--;
		}
		else if (result < n) {
			onePoint--;
		}
	}
	cout << temp;

	return 0;
}