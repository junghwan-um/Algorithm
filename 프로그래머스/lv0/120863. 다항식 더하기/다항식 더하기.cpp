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

string solution(string polynomial) {
    int num = 0, x = 0;
    vector<string> vec = split(polynomial);
    for (const auto &e : vec) {
        if (e != "+") {
            if (e.back() == 'x') {
                if (e == "x") ++x;
                else x += stoi(e.substr(0 , e.length() - 1));
            }
            else num += stoi(e);
        }
    }
    if (num == 0 && x != 0) {
        if (x != 1) return to_string(x) + "x";
        return "x";
    }
    if (num != 0 && x == 0) return to_string(num);
    if (num != 0 && x != 0) {
        if (x != 1) return to_string(x) + "x + " + to_string(num);
        return "x + " + to_string(num);
    }
}