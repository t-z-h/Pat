//
// Created by HengGe on 2020/6/28.
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
    freopen("input/1039.txt", "r", stdin);
#endif
    int pearls[256] = {0};   // 记录摊主不同珠子的个数
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++) {
//        cout << pearls[a[i]] << endl;
        pearls[a[i]]++;
    }
    int result = 0;
    for (int i = 0; i < b.length(); i++) {
        if (pearls[b[i]] > 0){
            pearls[b[i]]--;
        }
        else {
            result++;
        }
    }
    if (result)
        printf("No %d", result);
    else
        printf("Yes %d", a.length() - b.length());
    return 0;
}

