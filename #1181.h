#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

bool comp_len(const pair<string, int>& p1, const pair<string, int>& p2) {
	if (p1.second == p2.second) {
		return p1.first < p2.first;
	}
	return p1.second < p2.second;
}

int num_1181() {
	int count;
	string temp;
	int temp_length;
	vector<pair<string,int>> v;
	string check = "";

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> temp;
		temp_length = temp.size();
		v.push_back(pair<string, int>(temp, temp_length));
	}

	sort(v.begin(), v.end(), comp_len);

	for (int i = 0; i < v.size(); i++) {
		if (v.at(i).first == check) {
			continue;
		}
		cout << v.at(i).first << "\n";
		check = v.at(i).first;
	}

	return 0;
}