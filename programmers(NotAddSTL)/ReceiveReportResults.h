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

    for (int i = 0; i < report.size(); i++) { // ����Ʈ �ݺ�
        for (int j = 0; j < report[i].size(); j++) { // �ش� ����Ʈ �б�
            if (report[i][j] == ' ') { // ���� ������
                from.clear(); // �迭 ����
                to.clear();
                from.append(report[i], 0, j); // muzi��
                to.append(report[i], j + 1, report[i].size()); // frodo�Ű�

                for (int m = 0; m < id_list.size(); m++) {
                    if (id_list[m] == to) { // frodo�� id list ��ġ m ã�Ƽ�
                        bool bo = true;
                        for (int n = 0; n < check[m].size(); n++) { //üũm���� �ߺ� ã��
                            if (check[m][n] == from) { // üũm�� ���� from�� �ִ���

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

    for (int i = 0; i < id_list.size(); i++) { // i�� kȸ ���� id�� ��ġ
        if (check[i].size() >= k) {

            for (int j = 0; j < check[i].size(); j++) { // i�� �Ű��� j
                for (int m = 0; m < id_list.size(); m++) { // �� j�� ��ġ�� m
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