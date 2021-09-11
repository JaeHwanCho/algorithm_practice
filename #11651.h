#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

bool comp_forXY2(const pair<int, int>& p1, const pair<int, int>& p2) {
	if (p1.second == p2.second) {
		return p1.first < p2.first;
	}
	return p1.second < p2.second;
}

int num_11651() {
	int count;
	int temp;
	int temp_x, temp_y;
	vector<pair<int,int>> v;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> temp_x >> temp_y;
		v.push_back(pair<int, int>(temp_x, temp_y));
	}

	sort(v.begin(), v.end(), comp_forXY2);

	for (int i = 0; i < v.size(); i++) {
		cout << v.at(i).first << " " << v.at(i).second << "\n";
	}

	return 0;
}