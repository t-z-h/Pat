//
// Created by HengGe on 2020/6/12.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//int main() {
//#ifdef ONLINE_JUDGE
//#else
//    freopen("input/1023.txt", "r", stdin);
//#endif
//    int a[10], t;
//    for (int i = 0; i < 10; i++) {
//        cin >> a[i];
//    }
//    for (int i = 1; i < 10; i++) {
//        if (a[i] != 0){
//            cout << i;
//            t = i;
//            break;
//        }
//    }
//    for (int k = 0; k < a[0]; k++) {
//        cout << 0;
//    }
//    for (int i = 0; i < a[0]; i++) cout << 0;
//    for (int i = 0; i < a[t] - 1; i++) cout << t;
//    for (int i = t + 1; i < 10; i++)
//        for (int j = 0; j < a[i]; j++) {
//            cout << i;
//        }
//
//
//    return 0;
//}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("input/1023.txt", "r", stdin);
#endif
    int a[10], i;
    for (i = 0; i < 10; i++)
        cin >> a[i];
    for (i = 1; i < 10; i++) {
        if (a[i] != 0) {  // 找到第1个不为0的数
            cout << i << endl;
            a[i]--;             //2 2 0 0 0 3 0 0 1 0
            break;
        }
    }
    // 按顺序输出
    for (int j = 0; j < a[0]; j++) cout << 0 << endl;  // 先输出0
    cout << "temp = " << i << endl;
    for (; i < 10; i++)
        for (int k = 0; k < a[i]; k++)  // 若a[i]为0，不会进入循环
            cout << i << endl;

    return 0;
}

