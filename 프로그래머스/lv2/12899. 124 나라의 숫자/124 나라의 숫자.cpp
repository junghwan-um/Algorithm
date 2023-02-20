#include <bits/stdc++.h>

using namespace std;

string change(int n) {
    string res;
    stack<int> st;
    while ((n - 1) >= 0){
        int m = (n - 1) % 3;
        if (m == 0) st.push(1);
        else if(m == 1) st.push(2);
        else if (m == 2) st.push(4);
        n = (n - 1) / 3;
    }
    while (!st.empty()) {
        res += to_string(st.top());
        st.pop();
    }
    return res;
}

string solution(int n) {
    return change(n);
}