#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

int num_11659() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    int temp;
    vector<int> v;
    
    cin >> n >> m;
    v.push_back(0);

    for (int i = 0; i < n; i++) {
        cin >> temp;
        temp += v[i];
        v.push_back(temp);
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        temp = v[b] - v[a - 1];
        cout << temp << "\n";
    }

    return 0;

}