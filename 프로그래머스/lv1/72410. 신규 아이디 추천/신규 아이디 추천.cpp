#include <bits/stdc++.h>

using namespace std;

string solution(string new_id) {
    string answer = "";
    int flag = 1;
    for (const auto &e : new_id) {
        if (isalpha(e) || isdigit(e) || e == '-' || e == '.' || e == '_') {
            if (e == '.') {
                if (flag) {
                    answer += e;
                    flag = 0;
                }
            }
            else {
                flag = 1;
                if (isalpha(e)) answer += tolower(e);
                else answer += e;
            }
        }
    }
    
    if (answer[0] == '.' || answer[answer.size() - 1] == '.') {
        if (answer[0] == '.' && answer[answer.size() - 1] == '.') {
            answer = answer.substr(1, answer.size() - 2);
        }
        else if (answer[0] == '.') answer = answer.substr(1, answer.size() - 1);
        else answer = answer.substr(0, answer.size() - 1);
    }
    
    if (answer.size() >= 16) {
        answer = answer.substr(0, 15);
        if (answer[14] == '.') answer = answer.substr(0, 14);
    }
    if (answer == "") answer += "a";
    if (answer.size() <= 2) {
        char last = answer[answer.size() - 1];
        while (answer.size() < 3) answer += last;
    }
    return answer;
}