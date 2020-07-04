//
// Created by HengGe on 2020/6/10.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
//#include <hash_map>

using namespace std;

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1021.txt", "r", stdin);
#endif
    string s;
    cin >> s;
    int a[10] = {0};
    for (int i = 0; i < s.length(); i++) {
        a[s[i] - '0']++;
    }
    for (int j = 0; j < 10; j++) {
        if (a[j] != 0){
            printf("%d:%d\n", j, a[j]);
        }
    }

    return 0;
}
