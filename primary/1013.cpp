//
// Created by HengGe on 2020/6/1.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1013.txt", "r", stdin);
#endif
    int N, M, cnt = 0, num = 2;
    cin >> M >> N;
    vector<int> v;
    while (cnt < N) {
        if (isPrime(num)) {
            cnt++;
            if (cnt >= M) v.push_back(num);
            num++;
        }
        cnt = 0;
        for (int n: v) {
            cnt++;
            if (cnt % 10 != 1) printf(" ");
            printf("%d", n);
            if (cnt % 10 == 0) printf("\n");
        }

        return 0;
    }
}