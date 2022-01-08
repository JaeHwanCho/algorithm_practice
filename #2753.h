#include <iostream>

using namespace std;

int num_2753()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	bool check = false;

	cin >> n;

	if (n % 4 == 0) {
		if (n % 100 != 0 || n % 400 == 0) {
			check = true;
		}
	}
	cout << check;

	return 0;
}