#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<stack<int>> vec(board.size());
    for (int i = board.size() - 1; i >= 0; --i) {
        for (int j = 0; j < board[i].size(); ++j) {
            if (board[i][j] != 0) vec[j].push(board[i][j]);
        }
    }
    stack<int> res;
    for (const auto &e : moves) {
        if (!vec[e - 1].empty()) {
            int top = vec[e - 1].top();
            vec[e - 1].pop();
            if (res.empty()) res.push(top);
            else {
                if (top == res.top()) {
                    res.pop();
                    ++answer;
                }
                else res.push(top);
            }
        }
    }
    return answer * 2;
}