#include <bits/stdc++.h>

using namespace std;

vector<string> parse(string input) {
    vector<string> res;
    long long pos = 0;
    string token;
    while ((pos = input.find(' ')) != string::npos) {
        token = input.substr(0, pos);
        res.push_back(token);
        input.erase(0, pos + 1);
    }
    res.push_back(input);
    return res;
}

string solution(string s) {
    string answer;
    vector<string> vec = parse(s);
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = 0; j < vec[i].size(); ++j) {
            if (j % 2 == 0) vec[i][j] = toupper(vec[i][j]);
            else if (j % 2 == 1) vec[i][j] = tolower(vec[i][j]);
        }
        answer += vec[i];
        if (i != vec.size() - 1) answer += ' ';
    }
    return answer;
}