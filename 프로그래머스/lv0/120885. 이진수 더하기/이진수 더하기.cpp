#include <bits/stdc++.h>

using namespace std;

string change(int n) {
    if (n == 0) return "0";
    string res;
    stack<int> st;
    while (n != 0){
        int m = n % 2;
        st.push(m);
        n /= 2;
    }
    while (!st.empty()) {
        res += to_string(st.top());
        st.pop();
    }
    return res;
}

string solution(string bin1, string bin2) {
    int b1 = 0, b2 = 0;
    for (int i = bin1.length() - 1, j = 1; i >= 0; --i, j *= 2) b1 += (bin1[i] - '0') * j;
    for (int i = bin2.length() - 1, j = 1; i >= 0; --i, j *= 2) b2 += (bin2[i] - '0') * j;
    return change(b1 + b2);
}