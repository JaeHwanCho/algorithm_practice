#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int num_13305() {
	int station;
	cin >> station;

	vector<int> length(station - 1);

	for (int i = 0; i < station - 1; i++)
		cin >> length[i];

	vector<int> gas(station);

	for (int i = 0; i < station; i++)
		cin >> gas[i];

	int64_t result = 0;

	int min = INT_MAX;

	for (int i = 0; i < station - 1; i++) {
		min = gas[i] < min ? gas[i] : min;
		result += ((int64_t)min * length[i]);
	}

	cout << result;
    
    return 0;
}