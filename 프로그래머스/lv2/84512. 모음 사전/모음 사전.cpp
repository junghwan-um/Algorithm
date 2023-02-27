#include <bits/stdc++.h>

using namespace std;

vector<string> alpha {"", "A", "E", "I", "O", "U"};

set<string> create() {
    set<string> s;
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            for (int k = 0; k < 6; ++k) {
                for (int l = 0; l < 6; ++l) {
                    for (int m = 0; m < 6; ++m) {
                        string str = alpha[i] + alpha[j] + alpha[k] + alpha[l] + alpha[m];
                        if (str != "") s.insert(str);
                    }
                }
            }
        }
    }
    return s;
}

int solution(string word) {
    set<string> s = create();
    vector<string> vec;
    for (const auto &e : s) vec.push_back(e);
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] == word) return i + 1;
    }
}