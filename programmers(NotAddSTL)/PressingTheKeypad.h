#include <string>
#include <vector>
#include <iostream>

using namespace std;

int getLength(int s, int e) {
    int r = s - e;
    if (r < 0)
        r *= -1;
    return r;
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    
    int leftHand_x = 1;
    int leftHand_y = 4;
    int rightHand_x = 3;
    int rightHand_y = 4;
    
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == 1) {
            answer += "L";
            leftHand_x = 1;
            leftHand_y = 1;
        }
        else if (numbers[i] == 4) {
            answer += "L";
            leftHand_x = 1;
            leftHand_y = 2;
        }
        else if (numbers[i] == 7) {
            answer += "L";
            leftHand_x = 1;
            leftHand_y = 3;
        }
        else if (numbers[i] == 3) {
            answer += "R";
            rightHand_x = 3;
            rightHand_y = 1;
        }
        else if (numbers[i] == 6) {
            answer += "R";
            rightHand_x = 3;
            rightHand_y = 2;
        }
        else if (numbers[i] == 9) {
            answer += "R";
            rightHand_x = 3;
            rightHand_y = 3;
        }
        else if (numbers[i] == 2) {
            if ((getLength(2,leftHand_x) + getLength(1,leftHand_y)) > (getLength(2,rightHand_x) + getLength(1,rightHand_y))) {
                answer += "R";
                rightHand_x = 2;
                rightHand_y = 1;
            } else if ((getLength(2,leftHand_x) + getLength(1,leftHand_y)) < (getLength(2,rightHand_x) + getLength(1,rightHand_y))) {
                answer += "L";
                leftHand_x = 2;
                leftHand_y = 1;
            } else if (hand == "right") {
                answer += "R";
                rightHand_x = 2;
                rightHand_y = 1;
            }
            else {
                answer += "L";
                leftHand_x = 2;
                leftHand_y = 1;
            }
        }
        else if (numbers[i] == 5) {
            if ((getLength(2,leftHand_x) + getLength(2,leftHand_y)) > (getLength(2,rightHand_x) + getLength(2,rightHand_y))) {
                answer += "R";
                rightHand_x = 2;
                rightHand_y = 2;
            } else  if ((getLength(2,leftHand_x) + getLength(2,leftHand_y)) < (getLength(2,rightHand_x) + getLength(2,rightHand_y))) {
                answer += "L";
                leftHand_x = 2;
                leftHand_y = 2;
            } else if (hand == "right") {
                answer += "R";
                rightHand_x = 2;
                rightHand_y = 2;
            }
            else {
                answer += "L";
                leftHand_x = 2;
                leftHand_y = 2;
            }
        }
        else if (numbers[i] == 8) {
            if ((getLength(2,leftHand_x) + getLength(3,leftHand_y)) > (getLength(2,rightHand_x) + getLength(3,rightHand_y))) {
                answer += "R";
                rightHand_x = 2;
                rightHand_y = 3;
            } else  if ((getLength(2,leftHand_x) + getLength(3,leftHand_y)) < (getLength(2,rightHand_x) + getLength(3,rightHand_y))) {
                answer += "L";
                leftHand_x = 2;
                leftHand_y = 3;
            } else if (hand == "right") {
                answer += "R";
                rightHand_x = 2;
                rightHand_y = 3;
            }
            else {
                answer += "L";
                leftHand_x = 2;
                leftHand_y = 3;
            }
        }
        else if (numbers[i] == 0) {
            if ((getLength(2,leftHand_x) + getLength(4,leftHand_y)) > (getLength(2,rightHand_x) + getLength(4,rightHand_y))) {
                answer += "R";
                rightHand_x = 2;
                rightHand_y = 4;
            } else  if ((getLength(2,leftHand_x) + getLength(4,leftHand_y)) < (getLength(2,rightHand_x) + getLength(4,rightHand_y))) {
                answer += "L";
                leftHand_x = 2;
                leftHand_y = 4;
            } else if (hand == "right") {
                answer += "R";
                rightHand_x = 2;
                rightHand_y = 4;
            }
            else {
                answer += "L";
                leftHand_x = 2;
                leftHand_y = 4;
            }
        }
    }
    return answer;
}