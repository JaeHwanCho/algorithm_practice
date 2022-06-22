#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp_12865[100002][102]{};

int num_12865()
{
	int count, weight;
	int temp_1, temp_2;
	vector<pair<int, int>> v;

	cin >> count >> weight;

	v.push_back(pair<int, int>(0, 0));

	for (int i = 0; i < count; i++) {
		cin >> temp_1 >> temp_2; // 무게, 가치
		v.push_back(pair<int, int>(temp_1, temp_2));
	}

	for (int i = 1; i < weight + 1; i++) {
		for (int j = 1; j < count + 1; j++) {	// i = 현재무게, j = 물품순번
			if (v[j].first > i)
				dp_12865[i][j] = dp_12865[i][j - 1];
			else
				dp_12865[i][j] = max(dp_12865[i][j - 1], dp_12865[i - v[j].first][j - 1] + v[j].second);
		}
	}

	cout << dp_12865[weight][count];

	return 0;
}