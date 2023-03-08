#include <bits/stdc++.h>

using namespace std;

int solution(string A, string B) {
    for (int i = 0; i < A.length(); ++i) {
        string str = A.substr((A.length() - i) % A.length(), i);
        str += A.substr(0, A.length() - i);
        if (str == B) return i;
    }
    return -1;
}