#include <bits/stdc++.h>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    for (auto &e : skill_trees) {
        queue<char> que;
        for (const auto &f : skill) que.push(f);
        string token;
        
        for (const auto &f : e) {
            if (f == que.front()) que.pop();
            else {
                if (skill.find(f) != string::npos) {
                    token += f;
                }
            }
        }
        if (!token.length()) ++answer;        
    }
    return answer;
}