#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <queue>

using namespace std;

int num_1655()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int count;
	int x;
	int maxvalue, minvalue;
	priority_queue<int, vector<int>, less<int>> pqmax;
	priority_queue<int, vector<int>, greater<int>> pqmin;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> x;

		if (pqmax.size() > pqmin.size()) {
			pqmin.push(x);
		}
		else pqmax.push(x);

		if (pqmax.empty() == false && pqmin.empty() == false) {
			if (pqmax.top() > pqmin.top()) {
				maxvalue = pqmax.top();
				minvalue = pqmin.top();

				pqmax.pop();
				pqmin.pop();

				pqmax.push(minvalue);
				pqmin.push(maxvalue);
			}
		}
		cout << pqmax.top() << "\n";
	}

	return 0;
}