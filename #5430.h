#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int num_5430() {
	int n;
	string command;
	string str;
	deque<int> dq;
	int count = 0;
	bool PopOrPush;
	bool res;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		PopOrPush = true;
		res = true;
		dq.clear();
		
		cin >> command;
		cin >> count;
		cin >> str;
		
		char* arr = new char[str.size() + 1];
		strcpy(arr, str.c_str());
		char* token = strtok(arr, "[],");
		while (token != NULL) {
			dq.push_back((char)atoi(token));
			token = strtok(NULL, "[],");
		}
		delete[] token;
		delete[] arr;

		for (int i = 0; i < command.size(); i++) {
			if (command[i] == 'R') {
				PopOrPush = !PopOrPush;
			}
			else {
				if (dq.size() == 0) {
					res = false;
					break;
				}
				else if (PopOrPush)
					dq.pop_front();
				else
					dq.pop_back();
			}
		}
		if (!res)
			cout << "error\n";
		else {
			cout << "[";
			if (dq.size() > 0) {
				if (PopOrPush) {
					cout << dq.at(0);
					for (int i = 1; i < dq.size(); i++) {
						cout << "," << dq.at(i);
					}
				}
				else {
					for (int i = dq.size() - 1; i > 0; i--) {
						cout << dq.at(i) << ",";
					}
					cout << dq.at(0);
				}
			}
			cout << "]\n";
		}
	}
	return 0;
}