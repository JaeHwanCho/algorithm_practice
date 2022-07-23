#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <deque>

using namespace std;

vector<int> v_11438[100001];
int depth_11438[100001];
int n_11438, m_11438, a_11438, b_11438;
int parent_11438[18][100001];

int LCA_11438(int a, int b) {
	if (depth_11438[a] < depth_11438[b]) {
		swap(a, b);
	}

	int diff = depth_11438[a] - depth_11438[b];

	for (int r = 0; diff; r++) {
		if (diff & 1) {
			a = parent_11438[r][a];
		}
		diff >>= 1;
	}

	while (a != b) {
		int r;
		for (r = 0; r < 18; r++) {
			if (parent_11438[r][a] == parent_11438[r][b])
				break;
		}
		if (r > 0)
			r--;

		a = parent_11438[r][a];
		b = parent_11438[r][b];

	}
	return a;
}

int num_11438() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n_11438;
	for (int i = 1; i < n_11438; i++) {
		cin >> a_11438 >> b_11438;
		v_11438[a_11438].push_back(b_11438);
		v_11438[b_11438].push_back(a_11438);
	}

	for (int i = 1; i <= n_11438; i++) {
		depth_11438[i] = -1;
	}

	deque<int> q;
	q.push_back(1);
	depth_11438[1] = 0;
	while (!q.empty()) {
		int curr = q.front();
		q.pop_front();
		for (int next : v_11438[curr]) {
			if (depth_11438[next] == -1) {
				q.push_back(next);
				depth_11438[next] = depth_11438[curr] + 1;
				parent_11438[0][next] = curr;
			}
		}
	}
	for (int r = 1; r < 18; r++) {
		for (int i = 1; i <= n_11438; i++) {
			parent_11438[r][i] = parent_11438[r - 1][parent_11438[r - 1][i]];
		}
	}

	cin >> m_11438;

	for (int i = 0; i < m_11438; i++) {
		cin >> a_11438 >> b_11438;
		cout << LCA_11438(a_11438, b_11438) << "\n";
	}

	return 0;
}