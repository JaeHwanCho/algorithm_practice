#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <math.h>

using namespace std;
int n_1103, m_1103;
char map_1103[51][51]{};
int dx_1103[4] = { 1,0,-1,0 };
int dy_1103[4] = { 0,1,0,-1 };
int visit_1103[51][51]{};
bool cycleCheck_1103 = false;

int DFS_1103(int x, int y)
{
    if (x < 0 || y < 0 || x >= n_1103 || y >= m_1103 || map_1103[x][y] == 'H' || cycleCheck_1103)
        return 0;

    if (visit_1103[x][y] == 0) {
        cycleCheck_1103 = true;
        return 0;
    }
    else if (visit_1103[x][y] == -1) {
        visit_1103[x][y] = 0;
        int maxx = -1;
        for (int i = 0; i < 4; i++)
        {
            int next_x = x + ((map_1103[x][y] - 48) * dx_1103[i]);
            int next_y = y + ((map_1103[x][y] - 48) * dy_1103[i]);

            int res = DFS_1103(next_x, next_y) + 1;

            if (maxx < res)
                maxx = res;
        }
        visit_1103[x][y] = maxx;
        return visit_1103[x][y];
    }
    return visit_1103[x][y];
}

int num_1103() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string tempString;

    cin >> n_1103 >> m_1103;
    for (int i = 0; i < n_1103; i++) {
        cin >> tempString;
        for (int j = 0; j < m_1103; j++) {
            map_1103[i][j] = tempString[j];
            visit_1103[i][j] = -1;
        }
    }
    cycleCheck_1103 = false;
    int result = DFS_1103(0, 0);

    if (cycleCheck_1103)
        cout << "-1\n";
    else
        cout << result << "\n";

    return 0;
}