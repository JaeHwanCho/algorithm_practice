#include <iostream>

using namespace std;

int N_15652, M_15652;
int a_15652[9] = { 0, };

void dfs_15652(int x, int y) {
	if (x == M_15652) {
		for (int i = 0; i < M_15652; i++)
			cout << a_15652[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = y; i <= N_15652; i++) {
		a_15652[x] = i;
		dfs_15652(x + 1, i);
	}
}

int num_15652()
{
	cin >> N_15652 >> M_15652;

	dfs_15652(0,1);

	return 0;
}