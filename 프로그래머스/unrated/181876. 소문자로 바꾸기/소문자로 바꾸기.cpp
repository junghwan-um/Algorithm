#include <bits/stdc++.h>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (auto &e : myString) {
        answer += tolower(e);
    }
    return answer;
}