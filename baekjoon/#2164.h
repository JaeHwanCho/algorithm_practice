#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

int num_2164() {
	int n;
	int sw = 1;
	int temp;
	queue<int> q;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	while (q.size() != 1) {
		temp = q.front();
		q.pop();
		if (sw == 0) {
			q.push(temp);
		}
		sw = 1 - sw;
	}
	cout << q.front();

	return 0;
}