#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    queue<string> que1, que2;
    for (const auto &e : cards1) que1.push(e);
    for (const auto &e : cards2) que2.push(e);
    int idx = 0;
    while (idx < goal.size()) {
        string str, str2;
        if (!que1.empty()) str = que1.front();
        if (!que2.empty()) str2 = que2.front();
        if (str == goal[idx]) {
            que1.pop();
            ++idx;
        }
        else if (str2 == goal[idx]) {
            que2.pop();
            ++idx;
        }
        else {
            return "No";
        }
    }
    if (idx != goal.size()) return "No";
    return "Yes";
}