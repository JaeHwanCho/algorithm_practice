#include <iostream>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

int n_13460, m_13460;
char escapeMap_13460[11][11];
int visitMap_13460[11][11][11][11];
int res_13460 = 999999999;
int dx_13460[4] = { 1, 0, -1, 0 };
int dy_13460[4] = { 0, 1, 0, -1 };

void dfs_13460(int bx, int by, int rx, int ry, int depth) {
	if (depth > 10)
		return;

	if (escapeMap_13460[rx][ry] == 'O') {
		if (res_13460 > depth) {
			res_13460 = depth;
		}
		return;
	}

	for (int i = 0; i < 4; i++) {

		int nextBx = bx, nextBy = by, nextRx = rx, nextRy = ry;
		int countB = 0;
		int countR = 0;

		while (escapeMap_13460[nextBx + dx_13460[i]][nextBy] != '#' && dx_13460[i] != 0) {
			nextBx = nextBx + dx_13460[i];
			countB++;
			if (escapeMap_13460[nextBx][nextBy] == 'O') {
				break;
			}
		}
		while (escapeMap_13460[nextBx][nextBy + dy_13460[i]] != '#' && dy_13460[i] != 0) {
			nextBy = nextBy + dy_13460[i];
			countB++;
			if (escapeMap_13460[nextBx][nextBy] == 'O') {
				break;
			}
		}
		while (escapeMap_13460[nextRx + dx_13460[i]][nextRy] != '#' && dx_13460[i] != 0) {
			nextRx = nextRx + dx_13460[i];
			countR++;
			if (escapeMap_13460[nextRx][nextRy] == 'O') {
				break;
			}
		}
		while (escapeMap_13460[nextRx][nextRy + dy_13460[i]] != '#' && dy_13460[i] != 0) {
			nextRy = nextRy + dy_13460[i];
			countR++;
			if (escapeMap_13460[nextRx][nextRy] == 'O') {
				break;
			}
		}
		if (escapeMap_13460[nextBx][nextBy] == 'O') {
			continue;
		}

		if (nextRx == nextBx && nextRy == nextBy) {
			if (countR > countB) {
				nextRx -= dx_13460[i];
				nextRy -= dy_13460[i];
			}
			else {
				nextBx -= dx_13460[i];
				nextBy -= dy_13460[i];
			}
		}


		if (visitMap_13460[nextBx][nextBy][nextRx][nextRy] != 1) {
			visitMap_13460[nextBx][nextBy][nextRx][nextRy] = 1;
			dfs_13460(nextBx, nextBy, nextRx, nextRy, depth + 1);
			visitMap_13460[nextBx][nextBy][nextRx][nextRy] = 0;
		}
		
	}
}

int num_13460() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n_13460 >> m_13460;
	int bx, by, rx, ry;
	for (int i = 0; i < n_13460; i++) {
		for (int j = 0; j < m_13460; j++) {
			cin >> escapeMap_13460[i][j];

			if (escapeMap_13460[i][j] == 'B') {
				bx = i;
				by = j;
			}
			if (escapeMap_13460[i][j] == 'R') {
				rx = i;
				ry = j;
			}
		}
	}

	dfs_13460(bx, by, rx, ry, 0);

	if (res_13460 == 999999999)
		cout << "-1";
	else
		cout << res_13460;

	return 0;
}