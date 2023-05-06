#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <math.h>

using namespace std;

vector<vector<string>> v_again1039;

int dfs_again1039(string n, int k, string str, int depth) {
	if (depth == k) {
		return stoi(str);
	}

	int res = -1;

	for (int i = 0; i < str.size() - 1; i++) {
		for (int j = i + 1; j < str.size(); j++) {

			if (str[j] == '0' && i == 0)
				continue;


			swap(str[i], str[j]);
			if (find(v_again1039[depth].begin(), v_again1039[depth].end(), str) == v_again1039[depth].end()) {
				v_again1039[depth].push_back(str);
				res = max(res, dfs_again1039(n, k, str, depth + 1));
			}
			swap(str[i], str[j]);
		}
	}
	sort(v_again1039.begin(), v_again1039.end());
	return res;
}

int again_1039() {
	string n;
	int k;

	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		vector<string> tempV;
		v_again1039.push_back(tempV);
	}

	cout << dfs_again1039(n, k, n, 0);

	return 0;
}