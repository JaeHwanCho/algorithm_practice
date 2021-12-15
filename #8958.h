#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int num_8958()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	string str;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		int result = 0;
		int score = 0;

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'O') {
				score++;
				result += score;
			}
			else {
				score = 0;
			}
		}
		cout << result << "\n";
	}
	
	return 0;
}