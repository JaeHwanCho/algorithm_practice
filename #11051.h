#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp_11051[1001][1001]{};

int num_11051()
{
	int n, k;

	cin >> n >> k;

	for (int i = 1; i < n + 1; i++) {
		for (int j = 0; j < n + 1; j++) {
			if (i == j || j == 0)
				dp_11051[i][j] = 1;
			else
				dp_11051[i][j] = (dp_11051[i - 1][j] + dp_11051[i - 1][j - 1]) % 10007;
		}
	}

	cout << dp_11051[n][k];

	return 0;
}