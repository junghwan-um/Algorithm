#include <bits/stdc++.h>

using namespace std;

vector<string> split(string s) {
    vector<string> vec;
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, ' ')) {
        vec.push_back(temp);
    }
    return vec;
}

int solution(string s) {
    int answer = 0;
    stack<int> st;
    vector<string> vec = split(s);
    for (const auto &e : vec) {
        if (e == "Z") answer -= st.top();
        else {
            answer += stoi(e);
            st.push(stoi(e));
        }
    }
    return answer;
}