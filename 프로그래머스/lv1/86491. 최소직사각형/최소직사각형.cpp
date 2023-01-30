#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> sizes) {
    vector<int> w, h;
    for (const auto &e : sizes) {
        if (e[0] > e[1]) {
            w.push_back(e[0]);
            h.push_back(e[1]);
        }
        else {
            w.push_back(e[1]);
            h.push_back(e[0]);
        }
    }
    sort(w.begin(), w.end(), greater<>());
    sort(h.begin(), h.end(), greater<>());
    return w[0] * h[0];
}