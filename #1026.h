#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <queue>

using namespace std;

int num_1026()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, temp, result = 0;
	priority_queue<int, vector<int>, less<int>> pq_a;
	priority_queue<int, vector<int>, greater<int>> pq_b;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		pq_a.push(temp);
	}
	for (int i = 0; i < n; i++) {
		cin >> temp;
		pq_b.push(temp);
	}
	for (int i = 0; i < n; i++) {
		result += pq_a.top() * pq_b.top();
		pq_a.pop();
		pq_b.pop();
	}

	cout << result;

	return 0;
}