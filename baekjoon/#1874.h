#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

int num_1874()
{
	int n;
	int idx = 0;
	int arr[100001];
	vector<int> v;
	vector<char> ans;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++)
	{
		v.push_back(i);
		ans.push_back('+');

		while (!v.empty() && v.back() == arr[idx])	// �� ���� ������ Ȯ��
		{
			v.pop_back();
			ans.push_back('-');
			idx++;
		}
	}

	if (!v.empty())	// �� ���� ���̸� ������� ���� ��
		cout << "NO";
	else {
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << '\n';
	}

	return 0;
}