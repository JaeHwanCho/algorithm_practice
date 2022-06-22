#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a_1920[100001];

int find_1920(int n, int find_num) {
	int start = 0;
	int end = n - 1;
	int mid;

	while (end - start >= 0) {
		mid = (end + start) / 2;

		if (a_1920[mid] == find_num) {	
			return 1;
		}
		else if (a_1920[mid] > find_num) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return 0;
}

int num_1920() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int k;
	int temp;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a_1920[i];
	}

	sort(a_1920, a_1920 + n);
	cin >> k;

	for (int i = 0; i < k; i++) {
		cin >> temp;
		cout << find_1920(n, temp) << "\n";
	}

	return 0;
}