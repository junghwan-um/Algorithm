#include <bits/stdc++.h>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (const auto &e : my_string) {
        if (e != 'a' && e != 'e' && e != 'i' && e != 'o' && e != 'u') {
            answer += e;
        }
    }
    return answer;
}