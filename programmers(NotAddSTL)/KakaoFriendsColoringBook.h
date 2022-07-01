#include <vector>

using namespace std;

int number_of_area = 0;
int max_size_of_one_area = 0;
    
vector<vector<int>> mapV;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int maxM;
int maxN;
int count;

void dfs(int x, int y, int number) {
    if (mapV[x][y] != number)
        return;
    
    count++;
    mapV[x][y] = 0;
    
    for (int i = 0; i < 4; i++) {
        int next_x = x + dx[i];
        int next_y = y + dy[i];
        
        if (next_x >= 0 && next_y >= 0 && next_x < maxM && next_y < maxN) {
            dfs(next_x, next_y, number);
        }
    }
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    mapV = picture;
    maxM = m;
    maxN = n;
    number_of_area = 0;
    max_size_of_one_area = 0;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mapV[i][j] != 0) {
                
                count = 0;
                number_of_area++;
                dfs(i, j, mapV[i][j]);
                
                if (count > max_size_of_one_area) {
                    max_size_of_one_area = count;
                }
                
            }
        }
    }
    
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}