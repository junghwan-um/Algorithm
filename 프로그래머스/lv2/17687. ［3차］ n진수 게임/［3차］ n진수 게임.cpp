#include <bits/stdc++.h>

using namespace std;

map<int, char> mp;

string change(int n, int k) {
    if (n == 0) return "0";
    string res;
    stack<int> st;
    while (n != 0){
        int m = n % k;
        st.push(m);
        n /= k;
    }
    while (!st.empty()) {
        res += mp[st.top()];
        st.pop();
    }
    return res;
}

string solution(int n, int t, int m, int p) {
    string answer, str;
    char ch = 'A';
    for (int i = 0; i <= 15; ++i) {
        if (i <= 9) mp[i] = i + '0';
        else mp[i] = ch++;
    }
    int num = 0;
    while (str.length() <= m * t) str += change(num++, n);
    for (int i = 0; i < str.length(); ++i) {
        if (i % m == p - 1 && answer.length() < t) answer += str[i];
    }
    return answer;
}