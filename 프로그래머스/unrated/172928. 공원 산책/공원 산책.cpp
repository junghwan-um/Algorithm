#include <bits/stdc++.h>

using namespace std;

pair<int, int> start;
vector<string> split(string s) {
    vector<string> vec;
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, ' ')) vec.push_back(temp);
    return vec;
}

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    vector<vector<int>> vec(park.size(), vector<int> (park[0].size(), 0));
    map<string, pair<int,int>> dir;
    dir["N"] = {-1, 0}; dir["S"] = {1, 0}; dir["E"] = {0, 1}; dir["W"] = {0, -1};
    for (int i = 0; i < park.size(); ++i) {
        for (int j = 0; j < park[0].size(); ++j) {
            if (park[i][j] == 'S' || park[i][j] == 'O') {
                if (park[i][j] == 'S') start = {i, j};
                vec[i][j] = 1;
            }
        }
    }
    
    for (auto &e : routes) {
        vector<string> route = split(e);
        pair<int, int> cur = start;
        int flag = 1;
        for (int i = 0; i < stoi(route[1]); ++i) {
            int nx = cur.first + dir[route[0]].first;
            int ny = cur.second + dir[route[0]].second;
            if (nx >= 0 && nx < park.size() && ny >= 0 && ny < park[0].size()) {
                if (vec[nx][ny]) cur = {nx, ny};
                else {
                    flag = 0;
                    break;
                }
            }
            else {
                flag = 0;
                break;
            }
        }
        if (flag) start = cur;
    }
    answer.push_back(start.first);
    answer.push_back(start.second);
    return answer;
}