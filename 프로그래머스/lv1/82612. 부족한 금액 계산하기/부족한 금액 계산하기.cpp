#include <bits/stdc++.h>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long sum = (long)(count * (count + 1) / 2) * price;
    if (money >= sum) return 0;
    return sum - money;
}