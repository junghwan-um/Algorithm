#include <bits/stdc++.h>

using namespace std;

vector<string> split(string s) {
    vector<string> vec;
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, ' ')) vec.push_back(temp);
    return vec;
}

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for (const auto &e : quiz) {
        vector<string> vec = split(e);
        int flag = 1;
        int num = stoi(vec[0]), res = stoi(vec[vec.size() - 1]);
        for (int i = 1; i < vec.size() - 2; ++i) {
            if (i % 2 == 0) {
                if (flag) num += stoi(vec[i]);
                else num -= stoi(vec[i]);
            }
            else {
                if (vec[i] == "-") flag = 0;
                else flag = 1;
            }
        }
        if (num == res) answer.push_back("O");
        else answer.push_back("X");
    }
    return answer;
}