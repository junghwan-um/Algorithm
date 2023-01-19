#include <bits/stdc++.h>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int i = 0;
    for (; i < phone_number.size() - 4; ++i) answer += '*';
    for (; i < phone_number.size(); ++i) answer += phone_number[i];
    return answer;
}