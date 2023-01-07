#include <bits/stdc++.h>

using namespace std;

bool solution(string s)
{
    map<char, int> mp;
    for (const auto &e : s) {
        if (e == 'p' || e == 'P') ++mp['p'];
        else if (e == 'y' || e == 'Y') ++mp['y'];
        
    }
    return mp['p'] == mp['y'];

}