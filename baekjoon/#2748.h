#include <iostream>

using namespace std;

int num_2748() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;

    long long a = 0;
    long long b = 1;
    long long temp;

    if (n == 0) {
        cout << 0;
        return 0;
    }
    else if (n == 1) {
        cout << 1;
        return 0;
    }
    else {
        for (int i = 1; i < n; i++) {
            temp = a + b;
            a = b;
            b = temp;
        }
    }

    cout << b;
    return 0;
}