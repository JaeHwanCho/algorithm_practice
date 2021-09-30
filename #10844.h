#include <iostream>
#include <algorithm>

using namespace std;

int num_10844()
{
	int n;
	int nums[101][10]{};
	int sum = 0;

	cin >> n;

	for (int i = 1; i < 10; i++)
		nums[1][i] = 1;

	for (int i = 2; i < n + 1; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 0)
				nums[i][j] = nums[i - 1][j + 1];
			else if (j == 9)
				nums[i][j] = nums[i - 1][j - 1];
			else
				nums[i][j] = nums[i - 1][j - 1] + nums[i - 1][j + 1];

			nums[i][j] %= 1000000000;
		}
	}

	for (int i = 0; i < 10; i++)
		sum = (sum + nums[n][i]) % 1000000000;

	cout << sum;

	return 0;
}