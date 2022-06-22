#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int num_4948() {
	bool result[1000001] = {};
	int n, m;
	int count = 0;

	while (1) {
		cin >> n;
		
		if (n == 0) {
			break;
		}

		m = 2 * n;
		count = 0;

		for (int i = n+1; i <= m; i++)
		{
			result[i] = true;
		}

		for (int i = 2; i < sqrt(m) + 1; i++) {
			for (int j = 2 * i; j <= m; j += i)
			{
				result[j] = false;
			}
		}

		for (int i = n+1; i <= m; i++)
		{
			if (result[i] == true && i != 1)
				count++;
		}
		cout << count << endl;
	}

	return 0;
}