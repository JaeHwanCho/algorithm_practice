#include <iostream>

using namespace std;

int num_4344()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cout.setf(ios::fixed);
	cout.precision(3);

	int n = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int k;
		int arr[1001];
		float avg = 0;
		int count = 0;
		int check = 0;

		cin >> k;
		for (int j = 0; j < k; j++) {
			cin >> arr[j];
			avg += arr[j];
		}
		avg /= k;
		for (int j = 0; j < k; j++) {
			if (avg < arr[j])
				check++;
		}
		cout << (float)check / k * 100 << "%\n";
	}

	return 0;
}