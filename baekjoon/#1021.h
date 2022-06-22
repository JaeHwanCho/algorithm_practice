#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int num_1021() {
	int n, m;
	int temp = 0;
	deque<int> dq;
	deque<int> target;
	int count = 0;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}

	for (int i = 0; i < m; i++) {
		cin >> temp;
		target.push_back(temp);
	}
	while (target.size()) {
		for (int i = 0; i < dq.size(); i++) {
			if (target.front() == dq.at(i)) {
				temp = i;
			}
		}
		if (temp == 0) {
			dq.pop_front();
			target.pop_front();
		}
		else if (temp < dq.size() - temp) {
			dq.push_back(dq.front());
			dq.pop_front();
			count++;
		}
		else {
			dq.push_front(dq.back());
			dq.pop_back();
			count++;
		}
	}
	cout << count;

	return 0;
}