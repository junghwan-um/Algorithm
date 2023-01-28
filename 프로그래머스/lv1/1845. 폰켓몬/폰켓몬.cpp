#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> nums) {
    int answer = 0, n = nums.size() / 2;
    map<int, int> mp;
    for (const auto &e : nums) {
        ++mp[e];
    }
    for (const auto &e : mp) {
        if (n-- > 0) ++answer;
    }
    return answer;
}