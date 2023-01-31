#include <bits/stdc++.h>

using namespace std;

const int DIV {1234567};
int arr[100010];

int solution(int n) {
    arr[0] = 0; arr[1] = 1;
    for (int i = 2; i < n + 1; ++i) {
        arr[i] = (arr[i - 2] % DIV+ arr[i - 1] % DIV) % DIV;
    }
    return arr[n];
}