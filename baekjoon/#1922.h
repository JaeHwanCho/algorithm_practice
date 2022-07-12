#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int arr_1922[1001];

int find_1922(int a) {
	if (arr_1922[a] == a)
		return a;
	return arr_1922[a] = find_1922(arr_1922[a]);
}

void join_1922(int a, int b) {
	arr_1922[find_1922(b)] = find_1922(a);
}

bool comp_1922(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b) {
	return a.second < b.second;
}

int num_1922()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	int startNode, endNode, value;
	vector<pair<pair<int, int>, int>> v;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> startNode >> endNode >> value;

		v.push_back({ {startNode, endNode}, value });
	}

	sort(v.begin(), v.end(), comp_1922);

	for (int i = 0; i <= n; i++) {
		arr_1922[i] = i;
	}
	int result = 0;
	for (int i = 0; i < m; i++) {
		if (find_1922(v[i].first.first) != find_1922(v[i].first.second)) {
			join_1922(v[i].first.first, v[i].first.second);
			result += v[i].second;
		}
	}
	cout << result;

	return 0;
}