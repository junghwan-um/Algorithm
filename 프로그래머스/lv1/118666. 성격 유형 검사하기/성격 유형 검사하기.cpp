#include <bits/stdc++.h>

using namespace std;

map<char, int> mp;

char res(const char &a, const char &b) {
    if (mp[a] < mp[b]) return b;
    return a;
}

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    for (int i = 0; i < survey.size(); ++i) {
        if (choices[i] > 4) mp[survey[i][1]] += (choices[i] - 4);
        else if (choices[i] < 4) mp[survey[i][0]] += 4 - choices[i];
    }
    answer += res('R', 'T');
    answer += res('C', 'F');
    answer += res('J', 'M');
    answer += res('A', 'N');
    return answer;
}