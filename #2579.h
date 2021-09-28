#include <iostream>
#include<algorithm>

using namespace std;

int num_2579()
{
	int cnt;
	int stair[301]{};
	int res[301]{};

	cin >> cnt;

	for (int i = 1; i < cnt + 1; i++) {
		cin >> stair[i];
	}

	if (cnt == 2) {
		cout << stair[1] + stair[2];
		return 0;
	}

	res[1] = stair[1];
	res[2] = stair[1] + stair[2];

	for (int i = 3; i < cnt + 1; i++)
		res[i] = stair[i] + max(res[i - 3] + stair[i - 1], res[i - 2]);

	cout << res[cnt];

	return 0;
}