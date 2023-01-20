#include <iostream>

using namespace std;


int num_1453() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n, res = 0;
	int arr[101]{};

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (arr[temp] != 0) {
			res++;
		}
		else {
			arr[temp] = 1;
		}
	}

	cout << res;

	return 0;
}