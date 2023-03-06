#include <bits/stdc++.h>

using namespace std;

int arr[26];

string solution(string s) {
    string answer = "";
    for (const auto &e : s) ++arr[e - 'a'];
    for (int i = 0; i < 26; ++i) {
        if (arr[i] == 1) answer += 'a' + i;
    }
    return answer;
}