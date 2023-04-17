#include <bits/stdc++.h>

using namespace std;

int solution(int balls, int share) {
    long long tp = 1, bt = 1, mn = min(share, balls - share);
    for (unsigned long long i = 1; i <= mn; ++i) {
        tp *= balls--;
        if (tp % i == 0) tp /= i;
    }
    return tp ;
}