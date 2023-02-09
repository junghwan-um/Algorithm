#include <bits/stdc++.h>
using namespace std;

int arr[100010];

bool cmp(string a, string b) {
    int x = 0, y = 0;
    for (const auto &e : a) if (e == ',') ++x;
    for (const auto &e : b) if (e == ',') ++y;
    return x < y;
}

vector<string> split(string s) {
    vector<string> vec;
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, ',')) {
        vec.push_back(temp);
    }
    return vec;
}

vector<int> solution(string s) {
    vector<int> answer;
    s = s.substr(1, s.length() - 2);
    int flag = 0;
    vector<string> vec;
    string str;
    for (auto &e : s) {
        if (e == '{') flag = 1;
        else if (e == '}') {
            flag = 0;
            vec.push_back(str);
            str = "";
        }
        else {
            if (flag) str += e;
        }
    }
    sort(vec.begin(), vec.end(), cmp);
    for (auto &e : vec) {
        vector<string> element = split(e);
        for (const auto &f : element) {
            if (!arr[stoi(f)]) {
                answer.push_back(stoi(f));
                ++arr[stoi(f)];
            }
        }
    }
    return answer;
}