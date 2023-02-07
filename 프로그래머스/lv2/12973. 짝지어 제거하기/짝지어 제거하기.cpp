#include <bits/stdc++.h>

using namespace std;

int solution(string s)
{
    stack<char> st;
    for (const auto &e : s) {
        if (st.empty()) st.push(e);
        else {
            if (st.top() == e) st.pop();
            else st.push(e);
        }
    }
    return st.empty();
}