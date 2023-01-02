#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    set<string> words;
    words.insert("aya"); words.insert("ye");
    words.insert("woo"); words.insert("ma");
    
    for (const auto &e : babbling) {
        string temp;
        for (int i = 0; i < e.length(); ++i) {
            temp += e[i];
            if (find(words.begin(), words.end(), temp) != words.end()) {
                temp = "";
            }
        }
        if (temp == "") ++answer;
    }
    
    return answer;
}