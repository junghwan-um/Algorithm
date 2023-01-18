#include <bits/stdc++.h>

using namespace std;

vector<string> parse(string input) {
    vector<string> ret;
    long long pos = 0;
    string token;
    while ((pos = input.find(' ')) != string::npos) {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + 1);
    }
    ret.push_back(input);
    return ret;
}

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    map<string, int> mp;
    map<string, set<string>> ls;
    sort(report.begin(), report.end());
    report.erase(unique(report.begin(), report.end()), report.end());
    for (auto &e : report) {
        vector<string> vec = parse(e);
        ++mp[vec[1]];
        ls[vec[0]].insert(vec[1]);
    }
    for (const auto &e : id_list) {
        int num = 0;
        for (const auto &f : ls[e]) {
            if (mp[f] >= k) ++num;
        }
        answer.push_back(num);
    }
    return answer;
}