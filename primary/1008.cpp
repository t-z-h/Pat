//
// Created by HengGe on 2020/5/27.
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
    freopen("input/1008.txt", "r", stdin);
#endif
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    m %= n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
//   cout << a[2];
    if (m != 0){
        reverse(begin(a), begin(a) + n);
        reverse(begin(a), begin(a) + m);
        reverse(begin(a) + m, begin(a) + n);
    }
    for (int i = 0; i < n - 1; i++)
        cout << a[i] << " ";
    cout << a[n - 1];
    return 0;


}
