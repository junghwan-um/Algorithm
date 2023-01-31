#include <bits/stdc++.h>

using namespace std;

string bin(int n) {
    string res;
    stack<int> st;
    while (n != 0){
        if (n % 2 == 1) st.push(1);
        else if (n % 2 == 0) st.push(0);
        n /= 2;
    }
    while (!st.empty()) {
        res += to_string(st.top());
        st.pop();
    }
    return res;
}

vector<int> solution(string s) {
    vector<int> answer;
    int x = 0, y = 0;
    while (s != "1") {
        string temp;
        for (const auto &e : s) {
            if (e != '0') temp += e;
        }
        int len = temp.size();
        y += s.size() - len;
        s = bin(len);
        ++x;
    }
    answer.push_back(x);
    answer.push_back(y); 
    return answer;
}