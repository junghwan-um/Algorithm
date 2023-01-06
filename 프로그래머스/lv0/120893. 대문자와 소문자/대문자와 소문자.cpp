#include <bits/stdc++.h>

using namespace std;

string solution(string my_string) {
    for (auto &e : my_string) {
        if (e >= 'a' && e <= 'z') e = toupper(e);
        else e = tolower(e);
    }
    return my_string;
}