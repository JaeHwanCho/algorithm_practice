#include <iostream>

using namespace std;

int num_2739() {
	int n = 0;
	cin >> n;
	for (int i = 1; i < 10; i++) {
		cout << n << " * " << i << " = " << n * i << "\n";
	}
    return 0;
}