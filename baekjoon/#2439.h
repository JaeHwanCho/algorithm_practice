#include <iostream>

using namespace std;

int num_2439()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n - i; j++)
			cout << " ";
		for (int j = 0; j <= i; j++)
			cout << "*";
		cout << "\n";
	}

	return 0;
}