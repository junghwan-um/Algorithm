#include <bits/stdc++.h>

using namespace std;

string solution(int age) {
    string answer = "";
    string str = to_string(age);
    for (const auto &e : str) answer += 'a' + e - '0';
    return answer;
}