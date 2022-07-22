#include <iostream>
#include <string>

using namespace std;

long long int tree_2042[1024 * 1024 * 2];
int pos;

void update(int i, long a) {
	i = pos + i - 1;
	tree_2042[i] = a;
	i = i >> 1;
	while (i > 0) {
		tree_2042[i] = tree_2042[i * 2] + tree_2042[i * 2 + 1];
		i = i >> 1;
	}
}

long long sum(int a, int b) {
	a = pos + a - 1;
	b = pos + b - 1;

	long long int sum = 0;
	while (a <= b) {
		if ((a & 1) == 1) // a가 홀수 -> 오른쪽 child 
			sum += tree_2042[a];
		if ((b & 1) == 0) //b가 홀수 -> 왼쪽 child
			sum += tree_2042[b];
		a = (a + 1) >> 1;
		b = (b - 1) >> 1;
	}
	return sum;
}

int num_2042() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, k;

	cin >> n >> m >> k;

	for (pos = 1; pos < n; pos = pos << 1); // N 보다 크거나 같은 2의 제곱수 

	for (int i = 0; i < pos * 2; i++)
		tree_2042[i] = 0;

	for (int i = pos; i < pos + n; i++) { // leaf 채우기 
		cin >> tree_2042[i];
	}

	for (int i = pos - 1; i >= 1; i--) { // internal 채우기 
		tree_2042[i] = tree_2042[i * 2] + tree_2042[i * 2 + 1];
	}

	long long int a, b, c;

	for (int i = 0; i < m + k; i++) {
		cin >> a >> b >> c;

		if (a == 1) {
			update(b, c);
		}
		else {
			cout << sum(b, c) << "\n";
		}
	}

	return 0;
}