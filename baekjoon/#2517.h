#include <iostream>
#include <algorithm>

using namespace std;

pair<int, int> arr_2517[500001];
int tree_2517[1024 * 1024];
int pos_2517;

bool comp_power_2517(const pair<int, int> a, pair<int, int> b) {
	if (a.second < b.second)
		return true;

	return false;
}
bool comp_i_2517(const pair<int, int> a, pair<int, int> b) {
	if (a.first < b.first)
		return true;

	return false;
}

int get_sum_2517(int a, int b) {
	int sum = 0;
	a = pos_2517 + a - 1;
	b = pos_2517 + b - 1;
	while (a <= b) {
		if ((a & 1) == 1) sum += tree_2517[a];
		if ((b & 1) == 0) sum += tree_2517[b];
		a = (a + 1) >> 1;
		b = (b - 1) >> 1;
	}
	return sum;
}

void update_2517(int a) {
	a = pos_2517 + a - 1;

	while (a > 0) {
		tree_2517[a] += 1;
		a = a >> 1;
	}
}

int num_2517() {
	int n;

	cin >> n;
	int power = 0;

	for (pos_2517 = 1; pos_2517 < n; pos_2517 = pos_2517 << 1);
	for (int i = 0; i < pos_2517 * 2; i++)
		tree_2517[i] = 0;

	for (int i = 0; i < n; i++) {
		cin >> power;
		arr_2517[i] = { i, power };
	}

	sort(arr_2517, arr_2517 + n, comp_power_2517);

	int count = 0, prev = 0;

	for (int i = 0; i < n; i++) {
		if (prev != arr_2517[i].second)
			count++;
		arr_2517[i].second = count;
	}

	sort(arr_2517, arr_2517 + n, comp_i_2517);

	for (int i = 0; i < n; i++) {
		cout << i + 1 - get_sum_2517(1, arr_2517[i].second) << "\n";
		update_2517(arr_2517[i].second);
	}

}