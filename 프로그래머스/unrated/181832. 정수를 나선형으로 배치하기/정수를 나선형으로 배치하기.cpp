#include <bits/stdc++.h>

using namespace std;



vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n , 0));
    int x = 0, y = 0, num = 1, dir = 0;
    while (n > 0) {
        if (dir % 4 == 0) {
            for (int i = 0; i < n; ++i) {
                if (!answer[x][y]) answer[x][y++] = num++;
            }
            --n;
            --y;
            ++x;
        }
        else if (dir % 4 == 1) {
            for (int i = 0; i < n; ++i) {
                if (!answer[x][y]) answer[x++][y] = num++;
            }
            --x;
            --y;
        }
        else if (dir % 4 == 2) {
            for (int i = 0; i < n; ++i) {
                if (!answer[x][y]) answer[x][y--] = num++;
            }
            ++y;
            --x;
            --n;
        }
        else if (dir % 4 == 3) {
            for (int i = 0; i < n; ++i) {
                if (!answer[x][y]) answer[x--][y] = num++;
            }
            ++y;
            ++x;
        }
        ++dir;
    }
    return answer;
}