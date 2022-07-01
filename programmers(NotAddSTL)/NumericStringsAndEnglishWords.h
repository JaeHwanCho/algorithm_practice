#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    for (int i = 0 ; i < s.size();) {
        if ('0' <= s[i] && s[i] <= '9') {
            answer *= 10;
            answer += (int)s[i] - 48;
            i++;
        } else {
            int find = 0;
            string tempString = s.substr(i, 3); // one two six
            if (tempString == "one" || tempString == "two" || tempString == "six") {
                if (tempString == "one") {
                    answer *= 10;
                    answer += 1;
                } else if (tempString == "two") {
                    answer *= 10;
                    answer += 2;
                } else {
                    answer *= 10;
                    answer += 6;
                }
                i += 3;
            } else {
                tempString = s.substr(i,4); // zero four five nine
                if (tempString == "zero" || tempString == "four" || tempString == "five" || tempString == "nine") {
                    if (tempString == "zero") {
                        answer *= 10;
                    } else if (tempString == "four") {
                        answer *= 10;
                        answer += 4;
                    } else if (tempString == "five") {
                        answer *= 10;
                        answer += 5;
                    } else {
                        answer *= 10;
                        answer += 9;
                    }
                    i += 4;
                } else {
                    tempString = s.substr(i,5); // three seven eight
                    if (tempString == "three" || tempString == "seven" || tempString == "eight") {
                        if (tempString == "three") {
                            answer *= 10;
                            answer += 3;
                        } else if (tempString == "seven") {
                            answer *= 10;
                            answer += 7;
                        } else {
                            answer *= 10;
                            answer += 8;
                        }
                        i += 5;
                    }
                }
            }
        }
    }
    
    return answer;
}