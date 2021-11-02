#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<pair<string, string>> v;

bool comp_9375(const pair<string, string> &a, const pair<string, string> &b) {
	return a.second > b.second;
}

int num_9375()
{
	int n, nums;
	string a, b;
	int count = 1;
	int data[31]{};
	int result;

	cin >> n;

	for (int i = 0; i < n; i++) {
		v.erase(v.begin(), v.end());
		count = 0;
		result = 1;
		for (int i = 0; i < 31; i++) {
			data[i] = 1;
		}

		cin >> nums;

		for (int j = 0; j < nums; j++) {
			cin >> a >> b;
			v.push_back(pair<string, string>(a, b));
		}

		sort(v.begin(), v.end(), comp_9375);

		for (int i = 1; i < nums; i++) {
			if (v.at(i - 1).second != v.at(i).second) {
				count++;
			}
			else {
				data[count]++;
			}
		}

		for (int i = 0; i < count + 1; i++) {
			result *= data[i] + 1;
		}
		if (nums == 0)
			cout << 0 << "\n";
		else
			cout << result - 1 << "\n";
	}

	return 0;
}