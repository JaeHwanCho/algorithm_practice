#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp_1010[1001][1001]{};

int num_1010()
{
	int n, a, b, temp;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		
		temp = max(a, b);
		b = min(a, b);
		a = temp;

		for (int i = 1; i < a + 1; i++) {
			for (int j = 0; j < a + 1; j++) {
				if (i == j || j == 0)
					dp_1010[i][j] = 1;
				else
					dp_1010[i][j] = (dp_1010[i - 1][j] + dp_1010[i - 1][j - 1]);
			}
		}

		cout << dp_1010[a][b] << "\n";
	}
	return 0;
}