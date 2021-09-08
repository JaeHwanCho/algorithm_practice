#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool comp_for3(const pair<int, int>& p1, const pair<int, int>& p2) {
	if (p1.second == p2.second) {
		return p1.first < p2.first;
	}
	return p1.second > p2.second;
}

int num_2108() {
	int n;
	double sum = 0;
	int temp;
	vector<int> num;
	vector<pair<int, int>> count;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		num.push_back(temp);
		sum += temp;
	}
	sort(num.begin(), num.end());

	cout << round(sum / n) << "\n";

	if (n % 2 == 0)
		cout << (num.at(n / 2) + num.at((n / 2) + 1)) / 2 << "\n";
	else
		cout << num.at(n / 2) << "\n";

	for (int i = 0; i < n; i++) {
		if (count.empty()) {
			count.push_back(pair<int, int>(num[i], 1));
		}
		else if (count.back().first == num[i]) {
			pair<int, int> tmp = count.back();
			tmp.second++;
			count.pop_back();
			count.push_back(tmp);
		}
		else {
			count.push_back(pair<int, int>(num[i], 1));
		}
	}
	sort(count.begin(), count.end(), comp_for3);

	if (count.size() > 1) {
		if (count[0].second == count[1].second)
			cout << count[1].first << "\n";
		else
			cout << count[0].first << "\n";
	}
	else
		cout << count[0].first << "\n";
	cout << num.back() - num.front() << "\n";

	return 0;
}