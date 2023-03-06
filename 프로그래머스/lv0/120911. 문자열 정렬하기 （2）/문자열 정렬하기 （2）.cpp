#include <bits/stdc++.h>

using namespace std;

string solution(string my_string) {
    for (auto &e : my_string) e = tolower(e);
    sort(my_string.begin(), my_string.end());
    return my_string;
}