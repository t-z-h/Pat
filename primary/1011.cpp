//
// Created by HengGe on 2020/5/31.
//


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1011.txt", "r", stdin);
#endif
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        long long a, b, c;
        scanf("%lld%lld%lld", &a, &b, &c);
        printf("Case #%d: %s\n", i + 1, a + b > c ? "true" : "false");
    }

    return 0;
}
