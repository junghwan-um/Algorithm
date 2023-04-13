#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    vector<int> x, y;
    for (const auto &e : dots) {
        x.push_back(e[0]);
        y.push_back(e[1]);
    }
    int min_x = *min_element(x.begin(), x.end());
    int min_y = *min_element(y.begin(), y.end());
    int max_x = *max_element(x.begin(), x.end());
    int max_y = *max_element(y.begin(), y.end());
    return (max_x - min_x) * (max_y - min_y);
}