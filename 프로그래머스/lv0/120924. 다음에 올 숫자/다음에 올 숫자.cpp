#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> common) {
    int dif = common[1] - common[0];
    int mul = common[1] / common[0];
    if (dif == common[2] - common[1]) return common[common.size() - 1] + dif;
    return common[common.size() - 1] * mul;
}