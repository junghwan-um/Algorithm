#include <bits/stdc++.h>

using namespace std;

bool cmp(long long a, long long b) {
    return a > b;
}
long long solution(long long n) {
    long long answer = 0;
    string s = to_string(n);
    sort(s.begin(), s.end(), cmp);
    return stol(s);
}