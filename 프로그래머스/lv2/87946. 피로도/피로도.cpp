#include <bits/stdc++.h>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    vector<int> res;
    vector<pair<int, int>> vec;
    for(const auto &e : dungeons) {
        vec.push_back({e[0], e[1]});
    }
    sort(vec.begin(), vec.end());
    do {
        int cnt = 0, K = k;
        for (const auto &e : vec) {
            if (K >= e.first) {
                K -= e.second;
                ++cnt;
            }
        }
        res.push_back(cnt);
    } while(next_permutation(vec.begin(), vec.end()));
    return *max_element(res.begin(), res.end());
}