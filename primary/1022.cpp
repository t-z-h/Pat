//
// Created by HengGe on 2020/6/11.
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
    freopen("input/1022.txt", "r", stdin);
#endif
    int a, b , d;
    cin >> a >> b >> d;
    int Sum = a + b;
    if (Sum == 0){
        cout << 0;
        return 0;
    }
    int i = 0;
    int s[100];
    while (Sum != 0){
        s[i++] = Sum % d;
        Sum /= d;
    }
    for (int q = i - 1; q >= 0; q--) {
        cout << s[q];
    }

    return 0;
}
