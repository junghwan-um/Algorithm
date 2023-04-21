#include <bits/stdc++.h>

using namespace std;

int dx[8] {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] {0, 1, 1, 1, 0, -1, -1, -1};

int bomb(vector<vector<int>> board) {
    int res = 0;
    vector<vector<int>> vec(board.size(), vector<int>(board[0].size(), 0));
    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board[0].size(); ++j) {
            if (board[i][j]) {
                vec[i][j] = 1;
                for (int k = 0; k < 8; ++k) {
                    int nx = i + dx[k], ny = j + dy[k];
                    if (nx >= 0 && nx < board.size() && ny >= 0 && ny < board[0].size()) {
                        vec[nx][ny] = 1;
                    }
                }
            }
        }
    }
    for (const auto &e : vec) {
        for (const auto &f : e) {
            if (!f) ++res;
        }
    }
    return res;
}

int solution(vector<vector<int>> board) {
    return bomb(board);
}