#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <queue>

using namespace std;

int num_1075()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long n, f;
	int res;

	cin >> n >> f;

	n /= 100;
	n *= 100;

	for (res = 0; res < 100; res++) {
		if (n % f == 0)
			break;
		n++;
	}

	if (res / 10 == 0)
		cout << '0' << res;
	else
		cout << res;

	return 0;
}