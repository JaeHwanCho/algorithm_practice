#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int num_1929() {
	bool result[1000001] = {};
	int n, m;

	cin >> n >> m;

	for (int i = n; i <= m; i++)
	{
		result[i] = true;
	}

	for (int i = 2; i < sqrt(m) + 1; i++) {
		for (int j = 2 * i; j <= m; j += i)
		{
			result[j] = false;
		}
	}

	for (int i = n; i <= m; i++)
	{
		if (result[i] == true && i != 1)
			cout << i << "\n";
	}

	return 0;
}