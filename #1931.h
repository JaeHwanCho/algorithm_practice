#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int num_1931(void) {
	int count = 0;
	int start, end;
	int result = 1;
	int time;

	cin >> count;

	vector<pair<int, int>> v;

	for (int i = 0; i < count; i++) {
		cin >> start >> end;
		v.push_back(pair<int, int>(end, start));
	}
	sort(v.begin(), v.end());

	time = v[0].first;
	for (int i = 1; i < count; i++) {
		if (time <= v[i].second) {
			time = v[i].first;
			result += 1;
		}
	}
	cout << result;

    return 0;
}