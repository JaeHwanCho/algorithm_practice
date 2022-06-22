#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    vector<vector<string>> check;
    vector<int> checkResult;
    string to, from;

    for (int i = 0; i < id_list.size(); i++) {
        vector<string> v;
        check.push_back(v);
        answer.push_back(0);
    }

    for (int i = 0; i < report.size(); i++) { // 리포트 반복
        for (int j = 0; j < report[i].size(); j++) { // 해당 리포트 읽기
            if (report[i][j] == ' ') { // 띄어쓰기 있으면
                from.clear(); // 배열 비우고
                to.clear();
                from.append(report[i], 0, j); // muzi가
                to.append(report[i], j + 1, report[i].size()); // frodo신고

                for (int m = 0; m < id_list.size(); m++) {
                    if (id_list[m] == to) { // frodo의 id list 위치 m 찾아서
                        bool bo = true;
                        for (int n = 0; n < check[m].size(); n++) { //체크m에서 중복 찾기
                            if (check[m][n] == from) { // 체크m에 같은 from이 있는지

                                bo = false;
                                break;
                            }
                        }
                        if (bo == true) {
                            check[m].push_back(from);
                        }
                        break;
                    }
                }
                break;
            }
        }
    }

    for (int i = 0; i < id_list.size(); i++) { // i가 k회 넘은 id의 위치
        if (check[i].size() >= k) {

            for (int j = 0; j < check[i].size(); j++) { // i를 신고한 j
                for (int m = 0; m < id_list.size(); m++) { // 그 j의 위치는 m
                    if (check[i][j] == id_list[m]) {
                        answer[m] += 1;
                        break;
                    }
                }
            }
        }
    }
    return answer;
}