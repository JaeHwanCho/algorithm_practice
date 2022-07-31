#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

int num_2588()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string a, b;

	cin >> a >> b;

	cout << (int(b[2]) - 48) * stoi(a) << "\n";
	cout << (int(b[1]) - 48) * stoi(a) << "\n";
	cout << (int(b[0]) - 48) * stoi(a) << "\n";
	cout << stoi(b) * stoi(a);

	return 0;
}