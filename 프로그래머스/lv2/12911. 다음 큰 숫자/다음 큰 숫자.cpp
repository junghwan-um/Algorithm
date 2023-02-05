#include <bits/stdc++.h>

using namespace std;

int count(int n) {
    int cnt = 0;
    while (n != 0){
        if (n % 2 == 1) ++cnt;
        n /= 2;
    }
    return cnt;
}

int solution(int n) {
    int answer = 0;
    for (int i = n + 1;;++i) {
        if (count(i) == count(n)) return i;
    }
    return answer;
}