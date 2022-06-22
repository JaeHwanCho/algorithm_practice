#include <iostream>

using namespace std;

int cache[21][21][21];

int func(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0)
		return 1;
	
	if (a > 20 || b > 20 || c > 20)
		return func(20, 20, 20);

	if (cache[a][b][c] != 0) 
		return cache[a][b][c];

	if (a < b && b < c) {
		cache[a][b][c] = func(a, b, c - 1) + func(a, b - 1, c - 1) - func(a, b - 1, c);
		return cache[a][b][c];
	}
	cache[a][b][c] = func(a - 1, b, c) + func(a - 1, b - 1, c) + func(a - 1, b, c - 1) - func(a - 1, b - 1, c - 1);
	return cache[a][b][c];
}

int num_9184() {
	int x, y, z;
	int result;
	while (1) {
		cin >> x >> y >> z;
		
		if (x == -1 && y == -1 && z == -1)
			return 0;

		result = func(x, y, z);

		cout << "w(" << x << ", " << y << ", " << z << ") = " << result << "\n";
	}
}