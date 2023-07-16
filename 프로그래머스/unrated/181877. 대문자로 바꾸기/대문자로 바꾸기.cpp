#include <bits/stdc++.h>

using namespace std;

string solution(string myString) {
    for (auto &e : myString) e = toupper(e);
    return myString;
}