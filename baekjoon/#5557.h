#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int num_5557()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, num;
	long long res[21][101]{};
	cin >> n;
	cin >> num;

	res[num][0] = 1;

	for (int i = 1; i < n - 1; i++) {
		
		cin >> num;
		for (int j = 0; j <= 20; j++) {
			if (j + num <= 20) {
				res[j + num][i] += res[j][i - 1];
			}
			if (j - num >= 0) {
				res[j - num][i] += res[j][i - 1];
			}
		}

	}
	cin >> num;

	cout << res[num][n - 2];

	return 0;
}