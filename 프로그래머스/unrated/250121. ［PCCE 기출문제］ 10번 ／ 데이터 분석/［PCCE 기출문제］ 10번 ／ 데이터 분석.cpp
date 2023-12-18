#include <bits/stdc++.h>

using namespace std;

int FLAG;
typedef struct _datas{
    int CODE;
    int DATE;
    int MAX;
    int REM;
}datas;

bool cmp(datas a, datas b) {
    if (FLAG == 1) {
        return a.CODE < b.CODE;
    }
    else if (FLAG == 2) {
        return a.DATE < b.DATE;
    }
    else if (FLAG == 3) {
        return a.MAX < b.MAX;
    }
    else {
        return a.REM < b.REM;
    }
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    if (sort_by == "code") FLAG = 1;
    else if (sort_by == "date") FLAG = 2;
    else if (sort_by == "maximum") FLAG = 3;
    else FLAG = 4;
    
    vector<datas> vec;
    
    for (const auto &e : data) {
        datas temp;
        temp.CODE = e[0];
        temp.DATE = e[1];
        temp.MAX = e[2];
        temp.REM = e[3];
        if (ext == "code") {
            if (temp.CODE < val_ext) vec.push_back(temp);
        }
        else if (ext == "date") {
            if (temp.DATE < val_ext) vec.push_back(temp);
        }
        else if (ext == "maximum") {
            if (temp.MAX < val_ext) vec.push_back(temp);
        }
        else {
            if (temp.REM < val_ext) vec.push_back(temp);
        }
    }
    
    sort(vec.begin(), vec.end(), cmp);
    
    for (const auto &e : vec) {
        vector<int> temp;
        temp.push_back(e.CODE);
        temp.push_back(e.DATE);
        temp.push_back(e.MAX);
        temp.push_back(e.REM);
        answer.push_back(temp);
    }
    return answer;
}