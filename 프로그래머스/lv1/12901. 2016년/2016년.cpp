#include <bits/stdc++.h>

using namespace std;

vector<string> vec {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
vector<int> day {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int k;

string solution(int a, int b) {
    for (int i = 0; i < a - 1; ++i) k += day[i];
    k += b - 1;
    return vec[k % 7];  
}