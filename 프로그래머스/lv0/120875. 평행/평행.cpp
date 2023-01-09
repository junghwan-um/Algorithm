#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> dots) {
    for (int i = 1; i < 4; ++i) {
        double g1 = (double)(dots[0][1] - dots[i][1]) / (dots[0][0] - dots[i][0]);
        double g2;
        if (i == 1) {
            g2 = (double)(dots[2][1] - dots[3][1]) / (dots[2][0] - dots[3][0]);
        }
        else if (i == 2) {
            g2 = (double)(dots[1][1] - dots[3][1]) / (dots[1][0] - dots[3][0]);
        }
        else {
            g2 = (double)(dots[1][1] - dots[2][1]) / (dots[1][0] - dots[2][0]);
        }
                                              
        if (g1 == g2) return 1;
    }
    return 0;
}