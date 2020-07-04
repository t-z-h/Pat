//
// Created by HengGe on 2020/7/1.
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
    freopen("input/1042.txt", "r", stdin);
#endif
    string s;
    getline(cin, s);
    int letters[26] = {0};
    for (char &c : s) {
        c = tolower(c);
        if (islower(c)) letters[c - 'a']++;
    }
    int maxCount = letters[0];
    char maxLetter = 'a';
    for (int i = 1; i < 26; ++i) {
        if (letters[i] > maxCount) {
            maxCount = letters[i];
            maxLetter = 'a' + i;
        }
    }
    printf("%c %d", maxLetter, maxCount);

    return 0;
}

