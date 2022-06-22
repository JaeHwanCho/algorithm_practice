#include <iostream>

using namespace std;

int num_15552()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n = 0;
	int a, b;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}