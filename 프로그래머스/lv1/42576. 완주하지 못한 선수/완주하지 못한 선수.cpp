#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> mp;
    for (const auto &e : participant) mp[e] += 1;
    for (const auto &e : completion) --mp[e];
    for (const auto &e : mp) {
        if (e.second > 0) return e.first;
    }
    return answer;
}