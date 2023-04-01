#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> mp;
    for (int i = 0; i < name.size(); ++i) mp[name[i]] = yearning[i];
    for (const auto &e : photo) {
        int res = 0;
        for (const auto &f : e) res += mp[f];
        answer.push_back(res);
    }
    return answer;
}