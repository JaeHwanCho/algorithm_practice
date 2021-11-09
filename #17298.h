#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int num_17298() {

	int n;
	int temp;
	vector<int> v;
	vector<int> ans;
	stack<int> stk;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
		ans.push_back(-1);
	}

	for (int i = 0; i < n; i++) {
		if (stk.empty()) { // 인덱스 스택이 없는 경우 스택에 현재 인덱스 추가 
			stk.push(i);
			continue;
		}

		temp = stk.top();

		while (!stk.empty() && v.at(temp) < v.at(i)) { // 해결못한 인덱스가 남아있고, 현재 값보다 인덱스의 값이 더 크면 오큰수 시작
			ans.at(temp) = v.at(i); // 인덱스의 오큰수는 현재 값이 된다.
			stk.pop(); // 해당 인덱스는 오큰수를 찾았으니 제거

			if (!stk.empty())
				temp = stk.top(); // 해결못한 인덱스가 있다면, 그 전에 입력한 값으로 인덱스 변경
		}

		stk.push(i); // 현재 값을 인덱스 스택에 추가
	}

	for (int i = 0; i < n; i++)
		cout << ans.at(i) << " ";

	return 0;
}