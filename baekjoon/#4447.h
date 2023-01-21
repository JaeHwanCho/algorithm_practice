#include <iostream>
#include <string>

using namespace std;


int num_4447() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;

	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++) {
		string str;

		getline(cin, str);
		int g = 0;
		int b = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'g' || str[i] == 'G') {
				g++;
			}
			if (str[i] == 'b' || str[i] == 'B') {
				b++;
			}
		}
		if (g > b) {
			cout << str << " is GOOD" << "\n";
		}
		if (g < b) {
			cout << str << " is A BADDY" << "\n";
		}
		if (g == b) {
			cout << str << " is NEUTRAL" << "\n";
		}
	}

	return 0;
}