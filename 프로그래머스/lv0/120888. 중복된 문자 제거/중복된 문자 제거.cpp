#include <bits/stdc++.h>

using namespace std;

string solution(string my_string) {
    string answer;
    map<char, int> mp;
    for (const auto &e : my_string) {
        if (!mp[e]) {
            answer += e;
            ++mp[e];
        }
    }
    return answer;
}