#include <iostream>

using namespace std;

int num_2742()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;

	cin >> n;
	
	for (int i = n; i > 0; i--) {
		cout << i << "\n";
	}

	return 0;
}