#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    string result;
    map<string, char> mp;
    mp["zero"] = '0'; mp["one"] = '1'; mp["two"] = '2'; mp["three"] = '3'; mp["four"] = '4'; 
    mp["five"] = '5'; mp["six"] = '6'; mp["seven"] = '7'; mp["eight"] = '8'; mp["nine"] = '9';
    string temp;
    for (const auto &e : s) {
        if (e >= '0' && e <= '9') result += e;
        else {
            temp += e;
            if (mp[temp]) {
                result += mp[temp];
                temp = "";
            }
        }
    }
    return stoi(result);
}