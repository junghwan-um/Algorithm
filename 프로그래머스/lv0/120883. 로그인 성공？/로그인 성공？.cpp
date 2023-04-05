#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer;
    for (const auto &e : db) {
        if (e[0] == id_pw[0]) {
            if (e[1] == id_pw[1]) return "login";
            answer = "wrong pw";
        }
        else {
            if (answer != "wrong pw") answer = "fail";
        }
    }
    return answer;
}