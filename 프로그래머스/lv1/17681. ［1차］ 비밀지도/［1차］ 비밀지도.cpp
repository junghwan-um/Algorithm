#include <bits/stdc++.h>

using namespace std;

int N;
string change(int a, int b) {
    string res;
    stack<int> st, st2;
    while (a != 0){
        if (a % 2 == 1) st.push(1);
        else if (a % 2 == 0) st.push(0);
        a /= 2;
    }
    while (b != 0){
        if (b % 2 == 1) st2.push(1);
        else if (b % 2 == 0) st2.push(0);
        b /= 2;
    }
    string x, y;
    while (!st.empty()) {
        x += to_string(st.top());
        st.pop();
    }
    while (!st2.empty()) {
        y += to_string(st2.top());
        st2.pop();
    }

    if (x.size() < N) {
        string temp;
        for (int i = 0; i < N - x.size(); ++i) temp += '0';
        temp += x;
        x = temp;
    }
    if (y.size() < N) {
        string temp;
        for (int i = 0; i < N - y.size(); ++i) temp += '0';
        temp += y;
        y = temp;
    }
    
    for (int i = 0; i < N; ++i) {
        if ((x[i] - '0') | (y[i] - '0')) res += "#";
        else res += " ";
    }
    return res;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    N = n;
    for (int i = 0; i < arr1.size(); ++i) {
        answer.push_back(change(arr1[i], arr2[i]));
    }
    return answer;
}