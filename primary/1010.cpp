//
// Created by HengGe on 2020/5/30.
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
    freopen("input/1010.txt", "r", stdin);
#endif
    int a, b, notFirstPrint = 0;
    while (cin >> a >> b){
        if (b != 0) {
            if (notFirstPrint) cout << " ";
            cout << a * b << " " << b - 1;
            notFirstPrint = 1;
        }
    }
    if (!notFirstPrint) cout << "0 0";
    return 0;
}