#include <bits/stdc++.h>

using namespace std;

int solution(int M, int N) {
    return min(M, N) - 1 + min(M, N) * (max(M, N) - 1);
}