#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int num_1966() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int m, k;
	int temp;
	int idx = 0;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		queue<pair<int, int>> q;
		priority_queue<int> pq;

		idx = 0;
		cin >> m >> k;
		
		for (int j = 0; j < m; j++) {
			cin >> temp;
			q.push(pair<int, int>(temp, j));
			pq.push(temp);
		}
		while (!q.empty()) {
			while (q.front().first != pq.top()) {
				q.push(q.front());
				q.pop();
			}
			if (q.front().second == k) {
				idx++;
				cout << idx << "\n";
				break;
			}
			else {
				idx++;
				q.pop();
				pq.pop();
			}
		}
	}
	return 0;
}