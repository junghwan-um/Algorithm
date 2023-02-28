#include <bits/stdc++.h>

using namespace std;

const int DIV {1234567};
long long d[2020];

long long solution(int n) {
    d[1] = 1;
    d[2] = 2;
    for (int i = 3; i <= n; ++i) {
        d[i] = (d[i - 1] % DIV + d[i - 2] % DIV) % DIV;
    }
    return d[n];
}