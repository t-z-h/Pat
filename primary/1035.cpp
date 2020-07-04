//
// Created by HengGe on 2020/6/24.
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
    freopen("input/1035.txt", "r", stdin);
#endif
    int n, a[100], b[100], i, j;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        cin >> b[i];
    }
    // 拿到满足从左到右是从小到大顺序的最后一个下标
    for (i = 0; i < n - 1 && b[i] <= b[i + 1]; i++);
//    cout << i << endl;
    for (j = i + 1; a[j] == b[j] && j < n; j++);
//    cout << j << endl;
    cout << *a << endl;
//    return 0;
    if (j == n){
        cout << "Insertion Sort" << endl;
        sort(a, a + i + 2);    // 插入排序下一轮
    } else{
        cout << "Merge Sort" << endl;
        int k = 1, flag = 1;
        while (flag){
            flag = 0;
            for (i = 0; i < n; i++) {
                if (a[i] != b[i])
                    flag = 1;
            }
            k *= 2;
            cout << n / k << endl;
            for (i = 0; i < n / k; i++)
                sort(a + i * k, a + (i + 1) * k);
            for (int l = 0; l < n; l++) {
                cout << a[l];
            }
            printf("\n");
            sort(a + n / k * k, a + n);
            for (int l = 0; l < n; l++) {
                cout << a[l];
            }
            printf("\n");
        }
    }
//    for (j = 0; j < n; j++) {
//        if (j) printf(" ");
//        printf("%d", a[j]);
//    }

    return 0;
}
