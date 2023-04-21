#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> vec;
    map<int, int> mp;
    for (const auto &e : score) vec.push_back(e[0] + e[1]);
    sort(vec.begin(), vec.end(), greater<int>());
    for (int i = 0; i < vec.size(); ++i) {
        if(!mp[vec[i]]) mp[vec[i]] = i + 1;
    }
    for (const auto &e : score) answer.push_back(mp[e[0] + e[1]]);
    return answer;
}