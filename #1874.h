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

		while (!v.empty() && v.back() == arr[idx])	// 맨 뒤의 값인지 확인
		{
			v.pop_back();
			ans.push_back('-');
			idx++;
		}
	}

	if (!v.empty())	// 맨 뒤의 값이면 비어있지 않을 것
		cout << "NO";
	else {
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << '\n';
	}

	return 0;
}