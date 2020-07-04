//
// Created by HengGe on 2020/5/26.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isprime(int a){
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0) return false;
        return true;
}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1007.txt", "r", stdin);
#endif
    int N, cnt = 0;
    cin >> N;
    for (int i = 5; i <= N; i++)
        if (isprime(i - 2) && isprime(i)) cnt++;
    cout << cnt;

    return 0;
}