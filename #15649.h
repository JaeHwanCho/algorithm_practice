#include <iostream>

using namespace std;

int N, M;
int a[9] = {0, };
bool check[9] = { false, };

void dfs_15649(int x) {
	if (x == M) {
		for (int i = 0; i < M; i++)
			cout << a[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 1; i <= N; i++) {
		if (check[i] == false) {
			check[i] = true;
			a[x] = i;
			dfs_15649(x + 1);
			check[i] = false;
		}
	}
}

int num_15649()
{
	cin >> N >> M;

	dfs_15649(0);

	return 0;
}