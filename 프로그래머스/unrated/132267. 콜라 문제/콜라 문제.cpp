#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0, remain = 0;
    while (n >= a) {
        remain += n % a;
        n /= a;
        n *= b;
        answer += n;
        if (n < a) {
            n += remain;
            remain = 0;
        }
    }
    return answer;
}