#include <bits/stdc++.h>

using namespace std;

int answer, money;

int solution(vector<int> d, int budget) {
    sort(d.begin(), d.end());
    for (const auto &e : d) {
        money += e;
        if (money <= budget) ++answer;
    }
    return answer;
}