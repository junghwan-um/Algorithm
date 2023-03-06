#include <bits/stdc++.h>

using namespace std;

int solution(int num, int k) {
    string str = to_string(num);
    auto it = str.find(to_string(k));
    if (it != string::npos) return it + 1;
    return -1;
}