#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <math.h>

using namespace std;

stack<int> again_func_3425(vector<pair<string, int>> v, int a) {
	stack<int> s;
	s.push(a);

	for (int i = 0; i < v.size(); i++) {
		string opt = v[i].first;

		if (opt == "NUM") {
			s.push(v[i].second);
		}
		else if (opt == "POP") {
			if (s.size() < 1) {
				s.push(0);
				s.push(0);
				return s;
			}
			s.pop();
		}
		else if (opt == "INV") {
			if (s.size() < 1) {
				s.push(0);
				s.push(0);
				return s;
			}
			int temp = s.top();
			s.pop();
			s.push(-1 * temp);
		}
		else if (opt == "DUP") {
			if (s.size() < 1) {
				s.push(0);
				s.push(0);
				return s;
			}
			s.push(s.top());
		}
		else {
			if (s.size() < 2) {
				s.push(0);
				s.push(0);
				return s;
			}

			long long first = s.top();
			s.pop();
			long long second = s.top();
			s.pop();

			if (opt == "SWP") {
				s.push(first);
				s.push(second);
			}
			else if (opt == "ADD") {
				if (abs((long long)(first + second)) > 1000000000) {
					s.push(0);
					s.push(0);
					return s;
				}
				s.push(first + second);
			}
			else if (opt == "SUB") {
				if (abs((long long)(second - first)) > 1000000000) {
					s.push(0);
					s.push(0);
					return s;
				}
				s.push(second - first);
			}
			else if (opt == "MUL") {
				if ((long long)(second * first) > 1000000000) {
					s.push(0);
					s.push(0);
					return s;
				}
				s.push(first * second);
			}
			else if (opt == "DIV") {
				if (first == 0 || abs((long long)(second / first)) > 1000000000) {
					s.push(0);
					s.push(0);
					return s;
				}
				s.push(second / first);
			}
			else if (opt == "MOD") {
				if (first == 0 || abs((long long)(second % first)) > 1000000000) {
					s.push(0);
					s.push(0);
					return s;
				}
				s.push(second % first);
			}
		}
	}
	return s;
}

int again_3425() {

	vector<pair<string, int>> v;
	while (1) {
		v.clear();
		while (1) {

			string opt;

			cin >> opt;

			if (opt == "QUIT") {
				return 0;
			}
			else if (opt == "END") {
				break;
			}
			else if (opt != "NUM") {
				v.push_back({ opt, 0 });
			}
			else {
				int num;
				cin >> num;
				v.push_back({ opt, num });
			}
		}

		int count;
		cin >> count;
		for (int i = 0; i < count; i++) {
			int temp;
			cin >> temp;

			stack<int> res = again_func_3425(v, temp);
			if (res.size() == 1) {
				cout << res.top() << "\n";
			}
			else {
				cout << "ERROR\n";
			}
		}
		cout << "\n";
	}
}