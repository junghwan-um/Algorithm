#include <bits/stdc++.h>

using namespace std;

int N;

bool cmp(const int &a, const int &b) {
    if (abs(a - N) == abs(b - N)) return a < b;
    return abs(a - N) < abs(b - N); 
}

int solution(vector<int> array, int n) {
    N = n;
    sort(array.begin(), array.end(), cmp);
    return array[0];
}