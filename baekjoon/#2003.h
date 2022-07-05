#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int num_2003() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    int count = 0;
    int arr[10001]{};

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        int sum = 0;
        int j = 0;
        while (sum < m && i + j < n) {
            sum += arr[i + j];
            if (sum == m) {
                count++;
                break;
            }
            j++;
        }
    }
    cout << count;

    return 0;
}