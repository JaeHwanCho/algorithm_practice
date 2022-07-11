#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int arr_1717[1000001]{};

int find_1717(int node) {
	if (node == arr_1717[node])
		return node;
	return arr_1717[node] = find_1717(arr_1717[node]);
}

void join_1717(int a, int b) {
	int aRoot = find_1717(a);
	int bRoot = find_1717(b);

	arr_1717[bRoot] = aRoot;
}

int num_1717()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	int a, b, c;

	cin >> n >> m;

	for (int i = 0; i <= n; i++) {
		arr_1717[i] = i;
	}
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		if (a == 0) {
			join_1717(b, c);
		}
		else {
			if (find_1717(b) == find_1717(c)) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
		}
	}

	return 0;
}