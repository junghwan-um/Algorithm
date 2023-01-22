#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    if (s.size() % 2 == 0) answer = s.substr(s.size() / 2 - 1, 2);
    else if (s.size() % 2 == 1) answer = s[s.size() / 2];
    return answer;
}