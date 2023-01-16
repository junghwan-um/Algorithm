#include <bits/stdc++.h>

using namespace std;

bool solution(string s) {
    if (s.size() == 4 || s.size() == 6) {
        for (const auto &e : s) {
            if (isalpha(e)) return false;
        }
    }
    else return false;
    return true;
}