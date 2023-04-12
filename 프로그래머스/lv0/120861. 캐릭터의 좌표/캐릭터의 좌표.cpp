#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> d {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    map<string, int> mp;
    mp["up"] = 0; mp["down"] = 1; mp["left"] = 2; mp["right"] = 3;
    int x = (board[0] - 1) / 2, y = (board[1] - 1) / 2;
    pair<int, int> start {0, 0};
    for (const auto &e : keyinput) {
        if (abs(d[mp[e]].first + start.first) <= x && abs(d[mp[e]].second + start.second) <= y) {
            start.first += d[mp[e]].first;
            start.second += d[mp[e]].second;
        }
    }
    answer.push_back(start.first);
    answer.push_back(start.second);
    return answer;
}