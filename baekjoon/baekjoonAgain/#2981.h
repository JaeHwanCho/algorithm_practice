#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int again_gcd_2981(int a, int b) {
	if (a % b == 0)
		return b;

	return again_gcd_2981(b, a % b);
}

int again_2981() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	vector<int> v;
	vector<int> arr;
	int temp;
	int maxx;
	int end;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());
	end = v[n - 1];
	maxx = v[1] - v[0];

	for (int i = 2; i < n; i++) {
		maxx = again_gcd_2981(maxx, v[i] - v[i - 1]);
	}
	for (int i = 2; i * i <= maxx; i++) {
		if (maxx % i == 0) {
			arr.push_back(i);
			arr.push_back(maxx / i);
		}
	}

	arr.push_back(maxx);
	sort(arr.begin(), arr.end());
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}

	return 0;
}