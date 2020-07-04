//
// Created by HengGe on 2020/6/19.
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
    freopen("input/1030.txt", "r", stdin);
#endif
    int n;
    long long p;
    scanf("%d%lld", &n, &p);
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int result = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + result; j < n; j++) {
            if (v[j] > v[i] * p)
                break;
//            cout << result << " " << j - i + 1 << endl;
            result = max(result, j - i + 1);
        }

    }
    cout << result;
    return 0;
}

