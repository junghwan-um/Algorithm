#include <bits/stdc++.h>

using namespace std;

int N;

bool cmp(int a, int b) {
    if (abs(N - a) == abs(N - b)) return a > b;
    return abs(N - a) < abs(N - b);
}

vector<int> solution(vector<int> numlist, int n) {
    N = n;
    sort(numlist.begin(), numlist.end(), cmp);
    return numlist;
}