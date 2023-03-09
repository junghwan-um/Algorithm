#include <bits/stdc++.h>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string str;
    for (const auto &e : my_string) {
        if (isdigit(e)) str += e;
        else {
            if (str != "") answer += stoi(str);
            str = "";
        }
    }
    if (str != "") answer += stoi(str);
    return answer;
}