#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <math.h>

using namespace std;

int n_again1103, m_again1103, visit_again1103[51][51];
char map_again1103[51][51];
bool cycle_again1103 = false;

int func_again1103(int x, int y) {
	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };

	if (x < 0 || y < 0 || x >= n_again1103 || y >= m_again1103 || map_again1103[x][y] == 'H' || cycle_again1103)
		return 0;

	if (visit_again1103[x][y] == 0) {
		cycle_again1103 = true;
		return 0;
	}
	else if (visit_again1103[x][y] == -1) {
		visit_again1103[x][y] = 0;
		int maxx = -1;
		for (int i = 0; i < 4; i++)
		{
			int next_x = x + ((map_again1103[x][y] - 48) * dx[i]);
			int next_y = y + ((map_again1103[x][y] - 48) * dy[i]);

			int res = func_again1103(next_x, next_y) + 1;

			if (maxx < res)
				maxx = res;
		}
		visit_again1103[x][y] = maxx;
		return visit_again1103[x][y];
	}
	return visit_again1103[x][y];
}
int again_1103() {

	cin >> n_again1103 >> m_again1103;

	for (int i = 0; i < n_again1103; i++) {
		for (int j = 0; j < m_again1103; j++) {
			cin >> map_again1103[i][j];
			visit_again1103[i][j] = -1;
		}
	}

	int result = func_again1103(0, 0);

	if (cycle_again1103) {
		cout << "-1\n";
	}
	else {
		cout << result;
	}


	return 0;
}