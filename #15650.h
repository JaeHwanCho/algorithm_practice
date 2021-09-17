#include <iostream>

using namespace std;

int N_15650, M_15650;
int a_15650[9] = {0, };
bool check_15650[9] = { false, };

void dfs_15650(int i, int x) {
	if (x == M_15650) {
		for (int i = 0; i < M_15650; i++)
			cout << a_15650[i] << " ";
		cout << "\n";
		return;
	}
	for (int j = i; j < N_15650; j++) {
		if (check_15650[j] == false) {
			check_15650[j] = true;
			a_15650[x] = j + 1;
			dfs_15650(j, x + 1);
			check_15650[j] = false;
		}
	}
}

int num_15650()
{
	cin >> N_15650 >> M_15650;

	dfs_15650(0, 0);

	return 0;
}