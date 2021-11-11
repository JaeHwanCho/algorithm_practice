#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

int num_18258() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	string str;
	int temp;
	queue<int> q;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			cin >> temp;
			q.push(temp);
		}
		else if (str == "pop") {
			if (q.empty())
				cout << "-1\n";
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (str == "size") {
			cout << q.size() << "\n";
		}
		else if (str == "empty") {
			cout << q.empty() << "\n";
		}
		else if (str == "front") {
			if (q.empty())
				cout << "-1\n";
			else {
				cout << q.front() << "\n";
			}
		}
		else if (str == "back") {
			if (q.empty())
				cout << "-1\n";
			else {
				cout << q.back() << "\n";
			}
		}
	}

	return 0;
}