#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int num_2525() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int h, m, t;

	cin >> h >> m >> t;
	m += t;
	bool check = true;
	while (check) {
		check = false;

		if (m >= 60) {
			m -= 60;
			h += 1;
			check = true;
		}
		if (h >= 24) {
			h -= 24;
			check = true;
		}
	}
	cout << h << " " << m;

	return 0;
}