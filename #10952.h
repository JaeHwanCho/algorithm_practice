#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int num_10952()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b;

	while (1) {
		cin >> a >> b;

		if (a == 0 && b == 0)
			break;
		else {
			cout << a + b << "\n";
		}
	}

	return 0;
}