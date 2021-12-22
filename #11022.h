#include <iostream>

using namespace std;

int num_11022() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n;
	int a, b;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << "\n";
	}
	return 0;
}
