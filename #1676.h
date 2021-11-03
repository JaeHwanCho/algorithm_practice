#include <iostream>

using namespace std;

int num_1676()
{
	int n;
	int res = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % 5 == 0)
			res++;
		if (i % 25 == 0)
			res++;
		if (i % 125 == 0)
			res++;
	}

	cout << res;

	return 0;
}