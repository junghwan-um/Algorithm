#include <bits/stdc++.h>

using namespace std;

int arr[26];

string solution(string s, string skip, int index) {
    string answer = "";
    for (const auto &e : skip) ++arr[e - 'a'];
    for (const auto &e : s) {
        int cnt = 0;
        char res = e;
        while (cnt < index) {
            res = (res - 'a' + 1) % 26 + 'a';
            if (!arr[res - 'a']) ++cnt;
        }
        answer += res;
    }
    return answer;
}