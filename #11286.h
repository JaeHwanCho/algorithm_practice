#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int num_11286()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int temp;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;

		if (temp == 0) {
			if (pq.size() == 0)
				cout << "0\n";
			else {
				cout << pq.top().second << "\n";
				pq.pop();
			}
		}
		else
			pq.push(pair<int, int>(abs(temp), temp));
	}
	
	return 0;
}