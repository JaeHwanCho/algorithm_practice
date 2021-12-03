#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num_9506()
{
	while (1) {
		int n;
		int sum = 0;
		vector<int> v;

		cin >> n;

		if (n == -1)
			return 0;
		else {
			for (int i = 1; i < n; i++) {
				if (n % i == 0) {
					v.push_back(i);
					sum += i;
				}
			}
			if (sum == n) {
				cout << n << " = ";
				cout << v[0];
				for (int i = 1; i < v.size(); i++)
					cout << " + " << v[i];
			}
			else
				cout << n << " is NOT perfect.";
			cout << "\n";
		}
	}
}