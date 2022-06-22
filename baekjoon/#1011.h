#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>

using namespace std;

int num_1011()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	int x, y;
	int dist;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x >> y;

		dist = y - x;

		for (int n = 1; n <= dist; n++)
		{
			if (pow(n, 2) >= dist) 
			{
				if ((pow(n, 2) + pow(n - 1, 2)) / 2.0 > dist)
					cout << 2 * n - 2 << "\n";
				else
					cout << 2 * n - 1 << "\n";

				break;
			}
		}
	}

	return 0;
}