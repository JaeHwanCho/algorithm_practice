#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int num_1152()
{
	string str;
	int count = 0;

	getline(cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 32 && i != 0)
		{
			count++;
		}
		else if (i == str.length() - 1)
			count++;
	}
	if (str == " ")
		count = 0;

	cout << count;

	return 0;
}