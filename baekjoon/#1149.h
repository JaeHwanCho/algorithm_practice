#include <iostream>
#include<algorithm>

using namespace std;

int num_1149()
{
	int cnt;
	int house[1001][4];
	int sum[1001][4];
	cin >> cnt;
	
	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> house[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		sum[0][i] = house[0][i];
	}

	for (int i = 0; i < cnt - 1; i++) {
		sum[i + 1][0] = house[i + 1][0] + min(sum[i][1], sum[i][2]);
		sum[i + 1][1] = house[i + 1][1] + min(sum[i][2], sum[i][0]);
		sum[i + 1][2] = house[i + 1][2] + min(sum[i][0], sum[i][1]);
	}
	cout << min( min( sum[cnt - 1][0], sum[cnt - 1][1] ), sum[cnt - 1][2] );

	return 0;
}