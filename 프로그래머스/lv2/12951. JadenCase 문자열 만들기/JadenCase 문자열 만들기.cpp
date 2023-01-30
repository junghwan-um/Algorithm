#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    string temp;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            for (int j = 0; j < temp.size(); ++j) {
                if (j == 0) temp[0] = toupper(temp[0]);
                else temp[j] = tolower(temp[j]);
            }
            answer += temp;
            temp = "";
            answer += ' ';
        }
        else {
            temp += s[i];
        }
    }
    for (int j = 0; j < temp.size(); ++j) {
        if (j == 0) temp[0] = toupper(temp[0]);
        else temp[j] = tolower(temp[j]);
    }
    answer += temp;
    return answer;
}