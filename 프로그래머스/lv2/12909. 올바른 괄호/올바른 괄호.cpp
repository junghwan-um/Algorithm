#include <bits/stdc++.h>

using namespace std;

bool solution(string s)
{
    stack<char> st;
    for (const auto &e : s) {
        if (st.empty()) {
            if (e == ')') return false;
            st.push(e);
        }
        else {
            if (e == ')' && st.top() == '(') st.pop();
            else st.push('(');
        }
    }
    if (!st.empty()) return false;
    return true;
}