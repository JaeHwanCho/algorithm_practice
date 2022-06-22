#include <iostream>

using namespace std;

int N_15651, M_15651;
int a_15651[9] = { 0, };

void dfs_15651(int x) {
	if (x == M_15651) {
		for (int i = 0; i < M_15651; i++)
			cout << a_15651[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 1; i <= N_15651; i++) {
		a_15651[x] = i;
		dfs_15651(x + 1);
	}
}

int num_15651()
{
	cin >> N_15651 >> M_15651;

	dfs_15651(0);

	return 0;
}