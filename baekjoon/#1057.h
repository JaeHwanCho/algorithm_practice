#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <queue>

using namespace std;

int num_1057()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	int temp;
	int round = 0;

	cin >> n >> a >> b;

	while (n != 1) {
		n /= 2;
		round++;
	}

	while (true) {
		temp = pow(2, round);
		if ((a <= temp && b > temp) || (a > temp && b <= temp)) {
			cout << round + 1;
			break;
		}
		else if (a <= temp && b <= temp)
			round--;
		else if (a > temp && b > temp) {
			a -= temp;
			b -= temp;
			round--;
		}
	}
	return 0;
}