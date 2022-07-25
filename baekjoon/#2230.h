#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <deque>

using namespace std;

int arr_2230[100001];

int num_2230() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr_2230[i];
	}
	sort(arr_2230, arr_2230 + n);

	int left = 0, right = 0;
	int diff;
	int min = 2000000000;

	while (left < n && right < n) {
		diff = arr_2230[right] - arr_2230[left];
		if (diff >= m) {
			left++;
			if (diff < min)
				min = diff;
		}
		else {
			right++;
		}
	}
	cout << min;	

	return 0;
}