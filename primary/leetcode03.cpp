//
// Created by HengGe on 2020/6/27.
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
    freopen("input/leetcode03.txt", "r", stdin);
#endif
    string s;
    cin >> s;
    int lastOccurred[128] = {0};
    int res = 0;
    for (int start = 0, end = 0; end < s.size(); end++) {
        cout << lastOccurred[s[end]] << endl;
        if (lastOccurred[s[end]] >= start) {
            start = lastOccurred[s[end]];
        }
        res = max(res, end - start + 1);
        lastOccurred[s[end]] = end + 1;
    }
    cout << res;
    return res;
}
