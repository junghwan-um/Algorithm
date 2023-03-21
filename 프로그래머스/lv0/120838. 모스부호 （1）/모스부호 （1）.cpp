#include <bits/stdc++.h>

using namespace std;

string morse[26] {".-","-...","-.-.","-..",".","..-.","--.","....","..",
				".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                "...","-","..-","...-",".--","-..-","-.--","--.."};
map<string, char> mp;

vector<string> split(string s) {
    vector<string> vec;
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, ' ')) {
        vec.push_back(temp);
    }
    return vec;
}

string solution(string letter) {
    string answer = "";
    for (int i = 0; i < 26; ++i) mp[morse[i]] = 'a' + i;
    vector<string> vec = split(letter);
    for (const auto &e : vec) answer += mp[e];
    return answer;
}