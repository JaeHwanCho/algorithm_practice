#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

int num_10845()
{
	int n, temp;
	string command;
	queue<int> q;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == "push") {
			cin >> temp;
			q.push(temp);
		}
		else if (command == "pop") {
			if (q.size() == 0)
				cout << "-1\n";
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (command == "size") {
			cout << q.size() << "\n";
		}
		else if (command == "empty") {
			if (q.size() == 0)
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (command == "front") {
			if (q.size() == 0)
				cout << "-1\n";
			else
				cout << q.front() << "\n";
		}
		else if (command == "back") {
			if (q.size() == 0)
				cout << "-1\n";
			else
				cout << q.back() << "\n";
		}
	}
	return 0;
}