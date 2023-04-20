#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b) {
    return stol(to_string(a) + to_string(b)) > 2 * a * b ? stol(to_string(a) + to_string(b)) : 2 * a * b;
}