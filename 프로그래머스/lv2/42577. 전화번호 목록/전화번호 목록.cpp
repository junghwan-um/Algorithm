#include <bits/stdc++.h>

using namespace std;

bool solution(vector<string> phone_book) {
    map<string, int> mp;
    for (const auto &e : phone_book) ++mp[e];
    for (const auto &e : phone_book) {
        string str;
        mp[e] = 0;
        for (const auto &f : e) {
            str += f;
            if (mp[str]) {
                return false;
            }
        }
        mp[e] = 1;
    }
    return true;
}