#include <iostream>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

string n_1039;
int k_1039;
set<string> dp_1039[11]{};

int dfs_1039(string str, int depth) {
	if (depth == k_1039) {
		return stoi(str);
	}

	int res = -1;

	for (int i = 0; i < str.size() - 1; i++) {
		for (int j = i + 1; j < str.size(); j++) {

			if (str[j] == '0' && i == 0)
				continue;

			swap(str[i], str[j]);
			if (!dp_1039[depth].count(str)) {
				dp_1039[depth].insert(str);
				res = max(res, dfs_1039(str, depth + 1));
			}
			swap(str[i], str[j]);
		}
	}

	return res;
}

int num_1039() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n_1039 >> k_1039;

	cout << dfs_1039(n_1039, 0);

	return 0;
}