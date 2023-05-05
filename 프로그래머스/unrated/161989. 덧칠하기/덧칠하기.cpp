#include <bits/stdc++.h>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    vector<int> vec(n + 1, 1);
    for (const auto &e : section) vec[e] = 0;
    for (int i = 1; i <= n;) {
        if (!vec[i]) {
            ++answer;
            if (i + m <= n) i += m;
            else break;
        }
        else ++i;
    }
    return answer;
}