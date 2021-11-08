#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

int num_4949()
{
	string arr;
	stack<char> s;
	bool res;

	while (1) {
		while (s.size() != 0) {
			s.pop();
		}
		res = true;

		getline(cin, arr);

		if (arr[0] == '.')
			return 0;

		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] == '(')
				s.push('(');
			else if (arr[i] == '[')
				s.push('[');
			else if (arr[i] == ')') {
				if (s.size() != 0 && s.top() == '(') {
					s.pop();
				}
				else {
					res = false;
					break;
				}
			}
			else if (arr[i] == ']') {
				if (s.size() != 0 && s.top() == '[') {
					s.pop();
				}
				else {
					res = false;
					break;
				}
			}
		}

		if (s.size() != 0)
			res = false;

		if (res == true)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}