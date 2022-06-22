#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <queue>

using namespace std;

int num_1100()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char temp;
	int res = 0;
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> temp;
			if ((i + j) % 2 == 0 && temp == 'F')
				res++;
		}
	}

	cout << res;

	return 0;
}