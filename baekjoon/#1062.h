#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

int n_1062, k_1062;
bool visit_1062[22]{};
string str_1062[51];
int ans_1062 = 0;

void dfs_1062(int index, int num) {
	string alp = "bdefghjklmopqrsuvwxyz";

	if (num == k_1062) {
		int res = 0;

		for (int i = 0; i < n_1062; i++) {
			bool check = true;

			for (int j = 0; j < str_1062[i].size(); j++) {
				if (visit_1062[alp.find(str_1062[i][j])] == false) {
					check = false;
					break;
				}
			}

			if (check == true) {
				res++;
			}
		}

		if (ans_1062 < res) {
			ans_1062 = res;
		}

		return;
	}

	for (int i = index; i < 21; i++) {
		if (!visit_1062[i]) {
			visit_1062[i] = true;
			dfs_1062(i + 1, num + 1);
			visit_1062[i] = false;
		}
	}
}

int num_1062()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n_1062 >> k_1062;

	for (int i = 0; i < n_1062; i++) {
		cin >> str_1062[i];
		sort(str_1062[i].begin(), str_1062[i].end());
		str_1062[i].erase(unique(str_1062[i].begin(), str_1062[i].end()), str_1062[i].end());

		if (str_1062[i].find('a') < str_1062[i].size()) {
			str_1062[i].erase(str_1062[i].find('a'), 1);
		}
		if (str_1062[i].find('c') < str_1062[i].size()) {
			str_1062[i].erase(str_1062[i].find('c'), 1);
		}
		if (str_1062[i].find('n') < str_1062[i].size()) {
			str_1062[i].erase(str_1062[i].find('n'), 1);
		}
		if (str_1062[i].find('t') < str_1062[i].size()) {
			str_1062[i].erase(str_1062[i].find('t'), 1);
		}
		if (str_1062[i].find('i') < str_1062[i].size()) {
			str_1062[i].erase(str_1062[i].find('i'), 1);
		}
	}

	if (k_1062 < 5) {
		cout << 0;
		return 0;
	}

	k_1062 -= 5;
	dfs_1062(0, 0);
	cout << ans_1062;

	return 0;
}