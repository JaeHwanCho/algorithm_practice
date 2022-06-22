#include <iostream>

using namespace std;

int* board_9663 = new int[16];
int result_9663 = 0;

bool check(int row) {
	for (int col = 0; col < row; col++) {
		if (board_9663[row] == board_9663[col])
			return 0;
		if (abs(board_9663[row] - board_9663[col]) == abs(row - col)) {
			return 0;
		}
	}
	return 1;
}

void queen(int row, int n) {
	if (row == n) {
		result_9663++;
		return;
	}
	for (int col = 0; col < n; col++) {
		board_9663[row] = col;

		if (check(row)) {
			queen(row + 1, n);
		}
	}
}

int num_9663()
{
	int n;

	cin >> n;

	queen(0, n);
	cout << result_9663;
	
	delete[]board_9663;

	return 0;
}