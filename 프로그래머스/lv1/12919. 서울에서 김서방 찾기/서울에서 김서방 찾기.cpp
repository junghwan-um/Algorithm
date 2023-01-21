#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "김서방은 ";
    auto it = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin();
    answer += to_string(it);
    answer += "에 있다";
    return answer;
}