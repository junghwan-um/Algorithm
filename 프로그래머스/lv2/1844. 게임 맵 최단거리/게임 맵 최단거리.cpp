#include <bits/stdc++.h>

using namespace std;

int dx[4] {-1, 0, 1, 0};
int dy[4] {0, 1, 0, -1};

int bfs(vector<vector<int>> vec) {
    vector<vector<int>> vis(vec.size(), vector<int>(vec[0].size(), 0));
    queue<pair<int,int>> que;
    vis[0][0] = 1;
    que.push({0,0});
    while (!que.empty()) {
        int cx = que.front().first;
        int cy = que.front().second;
        if (cx == vec.size() - 1 && cy == vec[0].size() - 1) return vis[cx][cy];
        que.pop();
        for (int i = 0; i < 4; ++i) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if (nx >= 0 && nx < vec.size() && ny >= 0 && ny < vec[0].size()) {
                if (vec[nx][ny] && !vis[nx][ny]) {
                    que.push({nx, ny});
                    vis[nx][ny] = vis[cx][cy] + 1;
                }
            }
        }
    }
    return -1;
}

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    return bfs(maps);
}