//
// Created by HengGe on 2020/6/22.
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
    freopen("input/1033.txt", "r", stdin);
#endif
    string bad, should;
    getline(cin, bad);
    getline(cin , should);
    for (char c: should){
        if (bad.find(toupper(c)) != string::npos) continue;
        if (isupper(c) && bad.find('+') != string::npos) continue;
        cout << c;
    }
    return 0;
}

