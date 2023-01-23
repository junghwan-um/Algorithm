#include <bits/stdc++.h>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (auto &e : s) {
        if (islower(e)) {
            if (e + n > 'z') e = e + n - 'z' + 'a' - 1;
            else e += n;
        } 
        else if (isupper(e)) {
            if (e + n > 'Z') e = e + n - 'Z' + 'A' - 1;
            else e += n;
        }
    }
    return s;
}