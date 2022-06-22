#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;

int num_10866() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	string command;
	int temp;
	deque<int> dq;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> command;

		if (command == "push_front") {
			cin >> temp;
			dq.push_front(temp);
		}
		else if (command == "push_back") {
			cin >> temp;
			dq.push_back(temp);
		}
		else if (command == "pop_front") {
			if (dq.size() == 0) {
				cout << "-1\n";
			}
			else {
				cout << dq.at(0) << "\n";
				dq.pop_front();
			}
		}
		else if (command == "pop_back") {
			if (dq.size() == 0) {
				cout << "-1\n";
			}
			else {
				cout << dq.at(dq.size() - 1) << "\n";
				dq.pop_back();
			}
		}
		else if (command == "size") {
			cout << dq.size() << "\n";
		}
		else if (command == "empty") {
			cout << dq.empty() << "\n";
		}
		else if (command == "front") {
			if (dq.size() == 0) {
				cout << "-1\n";
			}
			else {
				cout << dq.front() << "\n";
			}
		}
		else if (command == "back") {
			if (dq.size() == 0) {
				cout << "-1\n";
			}
			else {
				cout << dq.back() << "\n";
			}
		}
	}
	return 0;
}