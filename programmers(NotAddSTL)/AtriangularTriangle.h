#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    
    int n = triangle.size();
    
    for (int i = 1; i < n; i++) {
        int row = triangle[i].size();
        
        triangle[i][0] += triangle[i-1][0];
        for (int j = 1; j < row - 1; j++) {
            triangle[i][j] += max(triangle[i-1][j], triangle[i-1][j-1]);
        }
        triangle[i][row-1] += triangle[i-1][row-2];
    }
    
    for (int i = 0; i < triangle[n - 1].size(); i++) {
        if (answer < triangle[n-1][i]) {
            answer = triangle[n-1][i];
        }
    }
    
    return answer;
}