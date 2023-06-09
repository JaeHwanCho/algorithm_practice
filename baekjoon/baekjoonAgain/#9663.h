#include <iostream>

using namespace std;

int board_again_9663[16]{};
int result_again_9663 = 0;

bool check_9663(int row) {
	for (int col = 0; col < row; col++) {
		if (board_again_9663[row] == board_again_9663[col]) {
			return false;
		}
		if (abs(board_again_9663[row] - board_again_9663[col]) == abs(row - col)) {
			return false;
		}
	}
	return true;
}

void queen_9663(int row, int n) {
	if (row == n) {
		result_again_9663++;

		return;
	}
	for (int col = 0; col < n; col++) {
		board_again_9663[row] = col;

		if (check_9663(row)) {
			queen_9663(row + 1, n);
		}
	}
}

int again_9663()
{
	int n;

	cin >> n;

	queen_9663(0, n);

	cout << result_again_9663;

	return 0;
}