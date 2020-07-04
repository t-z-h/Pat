//
// Created by HengGe on 2020/6/26.
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
    freopen("input/1037.txt", "r", stdin);
#endif
    int a, b, c, m, n, t, x, y, z;
    scanf("%d.%d.%d %d.%d.%d", &a, &b, &c, &m, &n, &t);
    // 如果应付金额大于实付金额，则交换它们的位置，并且输出“-”
    if (a > m || (a == m && b > n) || (a == m && b == n && c > t)){
        swap(a, m);
        swap(b, n);
        swap(c, t);
        printf("-");
    }
    // x, y, z代表要找的钱，从低位向高位计算(注意：如果有借位, 则n要减去1)
    z = t < c ? t - c + 29 : t - c;
    n = t < c ? n - 1 : n;
    y = n < b ? n - b + 17 : n - b;
    x = n < b ? m - a - 1 : m - a;
    printf("%d.%d.%d", x, y, z);
    return 0;
}

