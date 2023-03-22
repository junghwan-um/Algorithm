#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    set<int> s;
    for (int i = 2; i <= n; ++i) {
		if (n % i == 0) {
            n /= i;
            s.insert(i--);
        }
	}
    for (const auto &e : s) answer.push_back(e);
    return answer;
}