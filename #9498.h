#include <iostream>

using namespace std;

int num_9498()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x;

	cin >> x;

	if (x >= 90)
		cout << "A";
	else if (x >= 80)
		cout << "B";
	else if (x >= 70)
		cout << "C";
	else if (x >= 60)
		cout << "D";
	else
		cout << "F";

	return 0;
}