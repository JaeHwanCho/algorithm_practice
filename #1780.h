#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int board_1780[2188][2188];
int res_m_1780 = 0;
int res_z_1780 = 0;
int res_p_1780 = 0;

void func_1780(int n, int a, int b) {
	bool check = true;
	int res;


	if (n == 1) {
		if (board_1780[a][b] == -1)
			res_m_1780++;
		else if (board_1780[a][b] == 0)
			res_z_1780++;
		else
			res_p_1780++;
		return;
	}

	res = board_1780[a][b];
	for (int i = a; i < a + n; i++) {
		for (int j = b; j < b + n; j++) {
			if (board_1780[i][j] != res) {
				check = false;
				break;
			}
		}
		if (check == false)
			break;
	}
	if (check) {
		if (board_1780[a][b] == -1)
			res_m_1780++;
		else if (board_1780[a][b] == 0)
			res_z_1780++;
		else
			res_p_1780++;
		return;
	}
	else {
		func_1780(n / 3, a, b);
		func_1780(n / 3, a, b + n / 3);
		func_1780(n / 3, a, b + 2 * n / 3);
		func_1780(n / 3, a + n / 3, b);
		func_1780(n / 3, a + n / 3, b + n / 3);
		func_1780(n / 3, a + n / 3, b + 2 * n / 3);
		func_1780(n / 3, a + 2 * n / 3, b);
		func_1780(n / 3, a + 2 * n / 3, b + n / 3);
		func_1780(n / 3, a + 2 * n / 3, b + 2 * n / 3);
	}
}

int num_1780() {
	int n;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board_1780[i][j];
		}
	}
	func_1780(n,0,0);

	cout << res_m_1780 << "\n" << res_z_1780 << "\n" << res_p_1780;
		
	return 0;
}