//
// Created by HengGe on 2020/5/29.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1009.txt", "r", stdin);
#endif
    stack<string> words;
    int notFirstPrint = 0;
    string temp;
    while (cin >> temp)
        words.push(temp);

    int c = 0;
    while (!words.empty()) {
        if (notFirstPrint) cout << " ";

        cout << words.top() << c;
        c += 1;
        words.pop();
        notFirstPrint = 1;
    }

    /*stack<string> v;
    string s;
    while(cin >> s) v.push(s);
    cout << v.top();
    v.pop();
    while(!v.empty()) {
        cout << " " << v.top();
        v.pop();
    }*/

    return 0;
}
