#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int>b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

bool cmp2(pair<string, int> a, pair<string, int>b) {
    return a.second > b.second;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string, int> kind;
    map<string, vector<pair<int, int>>> music;
    for (int i = 0; i < genres.size(); ++i) {
        kind[genres[i]] += plays[i];
        music[genres[i]].push_back({i, plays[i]});
    }
    vector<pair<string, int>> kinds;
    for (const auto &e : kind) kinds.push_back(e);
    sort(kinds.begin(), kinds.end(), cmp2);
    for (const auto &e : kinds) sort(music[e.first].begin(), music[e.first].end(), cmp);
    for (const auto &e : kinds) {
        if (music[e.first].size() < 2) answer.push_back(music[e.first][0].first);
        else {
            for (int i = 0; i < 2; ++i) answer.push_back(music[e.first][i].first);
        }
    }
    return answer;
}