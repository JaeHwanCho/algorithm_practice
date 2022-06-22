#include <iostream>
#include <math.h>

using namespace std;

int num_9020() {
	int count;
	int n;
	int result[10000];
	int a, b;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> n;

		for (int j = 1; j <= n; j++)
		{
			result[j] = true;
		}

		result[1] = false;

		for (int j = 2; j < sqrt(n) + 1; j++) {
			for (int k = 2 * j; k <= n; k += j)
			{
				result[k] = false;
			}
		}

		for (int j = 2; j <= n / 2; j++) {
			if (result[j] == true)
				if (result[n - j] == true) {
					a = j;
					b = n - j;
				}
		}
		cout << a << " " << b << "\n";
	}

	return 0;
}