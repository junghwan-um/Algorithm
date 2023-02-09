#include <bits/stdc++.h>

using namespace std;

int N;

void move(vector<vector<int>> &vec) {
    int x = 0 , y = 0, dir = 0, num = 1;
    while (N > 0) {
        if (dir % 3 == 0) {
            for (int i = 0; i < N; ++i) vec[x++][y] = num++;
            --x;
            ++y;
        }
        else if (dir % 3 == 1) {
            for(int i = 0; i < N; ++i) vec[x][y++] = num++;
            y -= 2;
            --x;
        }
        else if (dir % 3 == 2) {
            for (int i = 0; i < N; ++i) vec[x--][y--] = num++;
            x += 2;
            ++y;
        }
        --N;
        ++dir;
    }
}

vector<int> solution(int n) {
    N = n;
    vector<int> answer;
    vector<vector<int>> vec(n);
    for (int i = 0 ; i < n; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            vec[i].push_back(0);
        }
    }
    move(vec);
    for (const auto &e : vec) {
        for (const auto &f : e) answer.push_back(f);
    }

    return answer;
}