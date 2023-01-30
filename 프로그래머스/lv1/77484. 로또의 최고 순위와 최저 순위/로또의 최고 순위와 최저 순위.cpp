#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    map<int, int> mp;
    int cnt_zero = 0, cnt = 0;
    for (const auto &e : lottos) {
        if (e == 0) ++cnt_zero;
        else ++mp[e];
    }
    for (const auto &e : win_nums) {
        if (mp[e] > 0) ++cnt;
    } 
    if (cnt < 2){
        answer.push_back(min(7 - (cnt + cnt_zero), 6));
        answer.push_back(6);
    }
    else {
        answer.push_back(7 - (cnt + cnt_zero));
        answer.push_back(7 - cnt);
    }
    return answer;
}