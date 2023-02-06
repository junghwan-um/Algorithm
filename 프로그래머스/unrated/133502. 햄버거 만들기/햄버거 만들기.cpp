#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    string token;
    for (const auto &e : ingredient) {
        token += to_string(e);
        if (token.size() >= 4) {
            if (token.substr(token.size() - 4) == "1231") {
                token.erase(token.size() - 4, 4);
                ++answer;
            }
        }
    }
    return answer;
}