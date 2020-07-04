//
// Created by HengGe on 2020/6/14.
//
#define  _CRT_SECURE_NO_WARNINGS
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
    freopen("input/1025.txt", "r", stdin);
#endif
//    int head, n, k, temp;
//    cin >> head >> n >> k;
//    int a[10], b[10], c[10];
//    for (int i = 0; i < 10; i++) {
//        cin >> temp;
//        int d = temp;
//        cin >> b[i];
//        cin >> c[i];
//    }
//    for (int j = 0; j < 10; j++) {
//        cout << temp << ' ' << b[j] << ' ' << c[j] << endl;
//    }
//    cout << begin(a) + 1 << endl;
//    cout << a << " " << b << " " << c;
//    return 0;



    int head, k, n, temp;
    cin >> head >> n >> k;
    int data[100005], next[100005], list[100005];
    for (int i = 0; i < n; i++) {
        cin >> temp;
        cin >> data[temp] >> next[temp];
    }
    int cnt = 0;
    while (head != -1) {
        list[cnt++] = head;
        head = next[head];
    }
    for (int i = 0; i < (cnt - cnt % k); i += k)
        reverse(begin(list) + i, begin(list) + i + k);
    for (int i = 0; i < cnt - 1; i++)
        printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
    printf("%05d %d -1\n", list[cnt - 1], data[list[cnt - 1]]);

    return 0;
}
