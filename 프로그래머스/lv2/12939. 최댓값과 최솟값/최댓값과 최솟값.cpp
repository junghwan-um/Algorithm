#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    vector<int> vec;
    string answer = "";
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, ' ')) {
        vec.push_back(stoi(temp));
    }
    answer += to_string(*min_element(vec.begin(), vec.end()));
    answer += " ";
    answer += to_string(*max_element(vec.begin(), vec.end()));
    return answer;
}