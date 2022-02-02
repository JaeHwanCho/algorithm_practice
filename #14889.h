#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <queue>

using namespace std;

int n_14889;
int arr_14889[21][21];
bool visted_14889[21];
int res_14889 = 9999999;

void backtracking_14889(int x, int index) {
	if (x == n_14889 / 2) {
		vector<int> startTeam;
		vector<int> linkTeam;

		int startScore = 0;
		int linkScore = 0;

		for (int i = 0; i < n_14889; i++) {
			if (visted_14889[i])
				startTeam.push_back(i);
			else
				linkTeam.push_back(i);
		}
		for (int i = 0; i < n_14889 / 2; i++) {
			for (int j = 0; j < n_14889 / 2; j++) {
				startScore += arr_14889[startTeam[i]][startTeam[j]];
				linkScore += arr_14889[linkTeam[i]][linkTeam[j]];
			}
		}
		if (abs(startScore - linkScore) < res_14889)
			res_14889 = abs(startScore - linkScore);
	}

	for (int i = index; i < n_14889; i++) {
		if (!visted_14889[i]) {
			visted_14889[i] = true;
			backtracking_14889(x + 1, i);
			visted_14889[i] = false;
		}
	}
}

int num_14889()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n_14889;

	for (int i = 0; i < n_14889; i++) {
		for (int j = 0; j < n_14889; j++) {
			cin >> arr_14889[i][j];
		}
	}
	backtracking_14889(0, 0);
	cout << res_14889 << "\n";

	return 0;
}