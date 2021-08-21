#include <iostream>

using namespace std;

int num_3053() {
	int n;
	double result_1, result_2;
	double PI = 3.14159265359;

	cin >> n;

	result_1 = PI * n * n;
	result_2 = 2 * n * n;

	cout << fixed;
	cout.precision(6);

	cout << result_1 << "\n";
	cout << result_2 << "\n";

	return 0;
}