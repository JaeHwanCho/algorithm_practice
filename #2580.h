#include <iostream>
#include <vector>

using namespace std;

int board_2580[9][9];
vector<pair<int, int>> point_2580;
bool fin_2580 = false;

bool check_2580(pair<int, int> v)
{
	int start_x = v.first / 3;
	int start_y = v.second / 3;
	start_x *= 3;
	start_y *= 3;

	for (int i = 0; i < 9; i++)
	{
		if (board_2580[v.first][i] == board_2580[v.first][v.second] && i != v.second)
			return false;

		if (board_2580[i][v.second] == board_2580[v.first][v.second] && i != v.first)
			return false;
	}
	for (int i = start_x; i < start_x + 3; i++)
		for (int j = start_y; j < start_y + 3; j++)
			if (board_2580[i][j] == board_2580[v.first][v.second] && i != v.first && j != v.second)
				return false;

	return true;
}

void sudoku_2580(int N, int cnt) {
	if (N == cnt)
	{
		fin_2580 = true;
		return;
	}
	for (int j = 1; j <= 9; j++)
	{
		board_2580[point_2580[N].first][point_2580[N].second] = j;
		if (check_2580(point_2580[N]))
			sudoku_2580(N + 1, cnt);
		if (fin_2580)
			return;
	}
	board_2580[point_2580[N].first][point_2580[N].second] = 0;

	return;
}

int num_2580()
{
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++)
		{
			cin >> board_2580[i][j];
			if (board_2580[i][j] == 0)
				point_2580.push_back(pair<int, int>(i, j));
		}
	}
	sudoku_2580(0, point_2580.size());

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++)
			cout << board_2580[i][j] << " ";
		cout << "\n";
	}

	return 0;
}