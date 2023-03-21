#include <bits/stdc++.h>

using namespace std;

map<int, int> mp;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> temp = emergency;
    sort(temp.begin(), temp.end(), greater<int>());
    for (int i = 0; i < temp.size(); ++i) mp[temp[i]] = i + 1;
    for (const auto &e : emergency) answer.push_back(mp[e]);
    return answer;
}