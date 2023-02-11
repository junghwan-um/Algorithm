#include <bits/stdc++.h>

using namespace std;

int dx[4] {-1, 0, 1,  0}; 
int dy[4] {0 , 1, 0, -1};

int solution(string dirs) {
    int answer = 0;
    map<pair<pair<int, int>, pair<int, int>>, int> mp;
    pair<int, int> start {5, 5};
    vector<vector<int>> vec(11, vector<int> (11, 0));
    for (const auto &e : dirs) {
        pair<int, int> move;
        if (e == 'U') move = {dx[0], dy[0]};
        else if (e == 'R') move = {dx[1], dy[1]};
        else if (e == 'D') move = {dx[2], dy[2]};
        else move = {dx[3], dy[3]};
        pair<int, int> next {start.first + move.first, start.second + move.second};
        if (next.first >= 0 && next.first <= 10 && next.second >= 0 && next.second <= 10) {
            if (!mp[{{start.first, start.second}, {next.first, next.second}}]) {
                ++answer;
                ++mp[{{start.first, start.second}, {next.first, next.second}}];
                ++mp[{{next.first, next.second}, {start.first, start.second}}];
            }
            start = next;
        }
    }
    return answer;
}