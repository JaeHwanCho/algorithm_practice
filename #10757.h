#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int num_10757()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string num1, num2, result;
	cin >> num1 >> num2;

	int up = 0;
	int ns1 = num1.size();
	int ns2 = num2.size();

	while (ns1 > 0 || ns2 > 0)
	{
		int nn1 = 0, nn2 = 0;

		if (ns1 > 0)
			nn1 = num1[--ns1] - '0';

		if (ns2 > 0)
			nn2 = num2[--ns2] - '0';

		int now = nn1 + nn2 + up;

		up = now / 10;
		now = now % 10;

		char up_char = now + '0';
		result = result + up_char;
	}

	if (up > 0)
		result += up + '0';

	for (int i = result.length() - 1; i >= 0; i--)
		cout << result[i];

	return 0;
}