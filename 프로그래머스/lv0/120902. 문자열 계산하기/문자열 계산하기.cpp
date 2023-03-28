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

int solution(string my_string) {
    vector<string> vec = split(my_string);
    int answer = stoi(vec[0]);
    for (int i = 2; i < vec.size(); i += 2) {
        if (vec[i - 1] == "+") answer += stoi(vec[i]);
        else answer -= stoi(vec[i]);
    }
    return answer;
}