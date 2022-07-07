#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int arr_6588[1000001]{};
int primeArr_6588[1000001]{};

int num_6588()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int primeCount = 0;

	for (int i = 2; i <= 1000000; i++) {
		if (!arr_6588[i]) {
			primeArr_6588[primeCount++] = i;
			for (int j = i * 2; j <= 1000000; j += i) {
				arr_6588[j] = 1;
			}
		}
	}

	while (1) {
		cin >> n;
		if (n == 0)
			return 0;
		for (int i = 1; i < 1000001; i++) {
			if (!arr_6588[n - primeArr_6588[i]]) {
				cout << n << " = " << primeArr_6588[i] << " + " << n - primeArr_6588[i] << "\n";
				break;
			}
		}
	}
}