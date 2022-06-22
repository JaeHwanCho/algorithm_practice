#include <iostream>

using namespace std;

int N_15649, M_15649;
int a_15649[9] = {0, };
bool check_15649[9] = { false, };

void dfs_15649(int x) {
	if (x == M_15649) {
		for (int i = 0; i < M_15649; i++)
			cout << a_15649[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 1; i <= N_15649; i++) {
		if (check_15649[i] == false) {
			check_15649[i] = true;
			a_15649[x] = i;
			dfs_15649(x + 1);
			check_15649[i] = false;
		}
	}
}

int num_15649()
{
	cin >> N_15649 >> M_15649;

	dfs_15649(0);

	return 0;
}