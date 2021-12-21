#include <iostream>

using namespace std;

int num_11021()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	int a, b;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": " << a + b << "\n";
	}

	return 0;
}