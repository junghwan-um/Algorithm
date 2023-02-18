#include <bits/stdc++.h>

using namespace std;

string solution(string rsp) {
    string answer = "";
    map<char, char> mp;
    mp['2'] = '0';
    mp['0'] = '5';
    mp['5'] = '2';
    for (const auto &e :rsp) answer += mp[e];
    return answer;
}