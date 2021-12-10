#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_1300()
{
	int n, k;
	int temp;

	cin >> n >> k;

	int start = 1;
	int end = k;
	int ans = 0;

	while (start <= end) {
		int mid = (start + end) / 2;
		int sum = 0;

		for (int i = 1; i <= n; i++)
			sum += min(mid / i, n);

		if (sum < k) 
			start = mid + 1;
		
		else {
			ans = mid;
			end = mid - 1;
		}
	}
	cout << ans;

	return 0;
}