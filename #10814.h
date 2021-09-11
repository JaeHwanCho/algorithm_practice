#include <iostream>
#include <stdio.h>
#include <vector>
#include <tuple>
#include <algorithm>
#include <list>

using namespace std;

bool comp_age_num(const tuple<int, string, int>& p1, const tuple<int, string, int>& p2) {
	if (get<0>(p1) == get<0>(p2)) {
		return get<2>(p1) < get<2>(p2);
	}
	return get<0>(p1) < get<0>(p2);
}

int num_10814() {
	int count;
	int temp_age;
	string temp_name;
	int num;
	vector<tuple<int, string, int>> v;

	cin >> count;
	num = 0;

	for (int i = 0; i < count; i++) {
		cin >> temp_age >> temp_name;
		v.push_back(tuple<int, string, int>(temp_age, temp_name, num));
		num++;
	}

	sort(v.begin(), v.end(), comp_age_num);

	for (int i = 0; i < v.size(); i++) {
		cout << get<0>(v[i]) << " " << get<1>(v[i]) << "\n";
	}

	return 0;
}