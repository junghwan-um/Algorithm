#include <bits/stdc++.h>

using namespace std;

int dx[8] {-1, -1, 0, 1, 1,  1,  0, -1};
int dy[8] {0 ,  1, 1, 1, 0, -1, -1, -1};
vector<vector<int>> vec(3, vector<int>(3, 0));

int move(pair<int, int> start, int turn, int dir) {
    vector<int> res;
    for (int i = dir; i < 8; i += 2) {
        int len = 1;
        stack<pair<int,int>> st;
        st.push({start.first, start.second});
        while (!st.empty()) {
            int cx = st.top().first;
            int cy = st.top().second;
            st.pop();
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if (nx >= 0 && nx < 3 && ny >= 0 && ny < 3) {
                if (vec[nx][ny] == turn) {
                    ++len;
                    st.push({nx, ny});
                }
            }
        }
        res.push_back(len);
    }
    return *max_element(res.begin(), res.end());
}

int longest(vector<pair<int, int>> start , int turn) {
    vector<int> answer;
    for (const auto &e : start) {
        int mx = max(move(e, turn, 0), move(e, turn, 1));
        answer.push_back(mx);
    }
    return *max_element(answer.begin(), answer.end());
}

int solution(vector<string> board) {
    int answer = 0;
    vector<pair<int, int>> a, b;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == 'O'){
                a.push_back({i, j});
                vec[i][j] = 1;
            }
            else if (board[i][j] == 'X') {
                b.push_back({i, j});
                vec[i][j] = -1;
            }
        }
    }
    if ((a.size() == 0 || a.size() == 1) && b.size() == 0) return 1;
    if (b.size() > a.size() || a.size() - b.size() > 1) return 0;
    int mx_a = longest(a, 1), mx_b = longest(b, -1);
    if (mx_a == 3 || mx_b == 3) {
        if (mx_a == mx_b) return 0;
        if (mx_a == 3) {
            if (a.size() <= b.size()) return 0;
        }
        if (mx_b == 3) {
            if (a.size() > b.size()) return 0;
        }
    }
    return 1;
}

