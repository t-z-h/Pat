//
// Created by HengGe on 2020/6/18.
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
    freopen("input/1029.txt", "r", stdin);
#endif
    string s1, s2, res;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++) {
        if (s2.find(s1[i]) == string::npos && res.find(toupper(s1[i])) == string::npos){
            res += toupper(s1[i]);
        }
    }
    cout << res;

    return 0;
}

