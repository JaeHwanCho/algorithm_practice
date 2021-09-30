#include <iostream>
#include <algorithm>

using namespace std;

int num_2156()
{
	int n;
	int* wine;
	int* wine_sum;

	cin >> n;
	wine = new int[n + 1]{};
	wine_sum = new int[n + 1]{};

	for (int i = 1; i < n + 1; i++)
		cin >> wine[i];

	wine_sum[1] = wine[1];
	wine_sum[2] = wine[1] + wine[2];

	for (int i = 3; i < n + 1; i++)
		wine_sum[i] = max(wine_sum[i - 3] + wine[i - 1] + wine[i], max(wine_sum[i - 2] + wine[i], wine_sum[i - 1]));

	cout << wine_sum[n];

	return 0;
}