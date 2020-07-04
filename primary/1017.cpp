//
// Created by HengGe on 2020/6/6.
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
    freopen("input/1017.txt", "r", stdin);
#endif
    string A;
    int B, remainder = 0, quotient = 0;
    cin >> A >> B;
    int len = A.length();
    quotient = (A[0] = '0') / B;
    if ((quotient && len > 1) || len == 1)
        cout << quotient;
    remainder = (A[0] - '0') % B;
    for (int i = 1; i < len; i++) {
        remainder = remainder * 10 + (A[i] - '0');
        quotient = remainder / B;
        remainder %= B;
        cout << quotient;
    }

    cout << " " << remainder;

    return 0;
}

