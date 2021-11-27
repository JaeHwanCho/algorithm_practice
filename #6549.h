#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

long long arr_6549[100011];

int num_6549() {
	int n;
	long long height, width, ans;

	while (1) {
		stack<long long> s;
		cin >> n;
		if (n == 0)
			break;
		for (int i = 0; i < n; i++) {
			cin >> arr_6549[i];
		}
		ans = 0;
		for (int i = 0; i < n; i++) {
			while (!s.empty() && arr_6549[s.top()] > arr_6549[i])
			{
				height = arr_6549[s.top()];
				s.pop();
				if (!s.empty()) {
					width = i - s.top() - 1;
				}
				else
					width = i;
				if (ans < height * width)
					ans = height * width;
			}
			s.push(i);
		}
		while (!s.empty()) {
			height = arr_6549[s.top()];
			s.pop();
			if (!s.empty()) {
				width = n - s.top() - 1;
			}
			else
				width = n;
			if (ans < height * width)
				ans = height * width;
		}
		cout << ans << "\n";
	}

	return 0;
}