#include <bits/stdc++.h>

using namespace std;

typedef struct category {
    string head;
    string number;
    string tail;
}category;

bool cmp(category a, category b) {
    for (auto &e : a.head) e = tolower(e);
    for (auto &e : b.head) e = tolower(e);
    if (a.head == b.head) {
        return stoi(a.number) < stoi(b.number);
    }
    return a.head < b.head;
}

vector<string> solution(vector<string> files) {
    vector<string> answer;
    vector<category> categories;
    for (auto e : files) {
        category c;
        int idx = 0;
        for (;idx < e.length(); ++idx) {
            if (!isdigit(e[idx])) c.head += e[idx];
            else break;
        }
        for (;idx < e.length(); ++idx) {
            if (isdigit(e[idx])) c.number += e[idx];
            else break;
        }
        for (;idx < e.length(); ++idx) c.tail += e[idx];
        categories.push_back(c);
    }
    stable_sort(categories.begin(), categories.end(), cmp);
    for (const auto &e : categories) {
        string token = e.head + e.number + e.tail;
        answer.push_back(token);
    }
    return answer;
}