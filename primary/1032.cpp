//
// Created by HengGe on 2020/6/21.
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
    freopen("input/1032.txt", "r", stdin);
#endif
    int n, num, score;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> num >> score;
        a[num] += score;
    }
    int max = a[1], t = 1;
    for (int j = 2; j <= n; ++j) {
        if (a[j] > max){
            max = a[j];
            t = j;
        }
    }
    cout << t << " " << max;
    return 0;
}

