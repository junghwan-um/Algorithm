#include <bits/stdc++.h>

using namespace std;
int dx[4] {-1, 0, 1, 0};
int dy[4] {0, 1, 0, -1};
vector<vector<int>> vec(4, vector<int>(3, 0));

int get_distance (int from, int to) {
    if (from == 0) from = 11;
    if (to == 0) to = 11;
    from -= 1; to -= 1;
    vector<vector<int>> vis(4, vector<int>(3, 0));
    queue<pair<int, int>> que;
    que.push({from / 3, from % 3});
    vis[from / 3][from % 3] = 1;
    while (!que.empty()) {
        int cx = que.front().first;
        int cy = que.front().second;
        if (cx == to / 3 && cy == to % 3) return vis[cx][cy];
        que.pop();
        for (int i = 0; i < 4; ++i) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if (nx >= 0 && nx < 4 && ny >= 0 && ny < 3) {
                if (!vis[nx][ny]) {
                    que.push({nx, ny});
                    vis[nx][ny] = vis[cx][cy] + 1;
                }
            }
        }
    }

}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int left = 10, right = 12;
    for (const auto &e : numbers) {
        if (e == 1 || e == 4 || e == 7) {
            answer += 'L';
            left = e;
        }
        else if (e == 3 || e == 6 || e == 9) {
            answer += 'R';
            right = e;
        }
        else {
            if (get_distance(left, e) < get_distance(right, e)) {
                answer += 'L'; 
                left = e;
            }
            else if (get_distance(left, e) > get_distance(right, e)) {
                answer += 'R'; 
                right = e;
            }
            else {
                answer += (char)toupper(hand[0]);
                if (hand == "right") right = e;
                if (hand == "left") left = e;
            }
        }
    }
    return answer;
}