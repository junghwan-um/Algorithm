#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> numbers, int k) {
    for (int i = 0;; i = (i + 2) % numbers.size(), --k) {
        if (k == 1) return i + 1;
    }
}