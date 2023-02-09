#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    for (int i = 0; i < s.length(); ++i) {
        string temp = s.substr(i) + s.substr(0, i);
        stack<char> st;
        int flag = 0;
        for (const auto &e : temp) {
            if (st.empty()) {
                if (e == '[' || e == '{' || e == '(') st.push(e);
                else {
                    flag = 1;
                    break;
                }
            }
            else {
                if (e == '[' || e == '{' || e == '(') st.push(e);
                else {
                    if (e == ']') {
                        if (st.top() == '[') st.pop();
                        else flag = 1;
                    }
                    else if (e == '}') {
                        if (st.top() == '{') st.pop();
                        else flag = 1;
                    }
                    else {
                        if (st.top() == '(') st.pop();
                        else flag = 1;
                    }
                }
            }
        }
        if (!flag && st.empty()) ++answer;
    }
    return answer;
}