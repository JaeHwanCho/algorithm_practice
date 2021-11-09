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
		if (stk.empty()) { // �ε��� ������ ���� ��� ���ÿ� ���� �ε��� �߰� 
			stk.push(i);
			continue;
		}

		temp = stk.top();

		while (!stk.empty() && v.at(temp) < v.at(i)) { // �ذ���� �ε����� �����ְ�, ���� ������ �ε����� ���� �� ũ�� ��ū�� ����
			ans.at(temp) = v.at(i); // �ε����� ��ū���� ���� ���� �ȴ�.
			stk.pop(); // �ش� �ε����� ��ū���� ã������ ����

			if (!stk.empty())
				temp = stk.top(); // �ذ���� �ε����� �ִٸ�, �� ���� �Է��� ������ �ε��� ����
		}

		stk.push(i); // ���� ���� �ε��� ���ÿ� �߰�
	}

	for (int i = 0; i < n; i++)
		cout << ans.at(i) << " ";

	return 0;
}