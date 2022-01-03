#include <iostream>

using namespace std;

int num_10951()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a = 0;
	int b = 0;

	while (1)
	{
		cin >> a >> b;
		if (cin.eof())
			break;

		cout << a + b << "\n";
	}

	return 0;
}