//
// Created by HengGe on 2020/6/13.
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
    freopen("input/1024.txt", "r", stdin);
#endif
    string s;
    cin >> s;
    int i = 0;
    while (s[i] != 'E') i++;
    string t = s.substr(1, i - 1);
    int n = stoi(s.substr(i + 1));
    if (s[0] == '-') cout << '-';
    if (n < 0) {
        cout << "0.";
        for (int j = 0; j < abs(n); j++) cout << '0';
        for (int j = 0; j < t.length(); j++)
            if (t[j] != '.') cout << t[j];
    } else{
        cout << t[0];
        int cnt, j;
        for (j = 2, cnt = 0; j < t.length(); j++, cnt++) cout << '0';
        if (j == t.length()){
            for (int k = 0; k < n - cnt; k++) cout << '0';
        } else {
            cout << '.';
            for (int k = j; k < t.length(); k++) cout << t[k];
        }
    }

    return 0;
}
