#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    stack<char> st;
    int a = 0, b = 0;
    for (const auto &e : s) {
        if (!st.empty()) {
            if (st.top() == e) {
                ++a;
            }
            else {
                ++b;
                if (a == b) {
                    st.pop();
                    ++answer;
                    b = 0;
                }
            }
        }
        else {
            st.push(e);
            a = 1;
        }
    }
    if(!st.empty()) ++answer;
    return answer;
}