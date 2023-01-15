#include <bits/stdc++.h>

using namespace std;

bool solution(int x) {
    string s = to_string(x);
    int y = 0;
    for (const auto &e : s) y += e - '0';
    return x % y == 0;
}