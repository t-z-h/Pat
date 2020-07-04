//
// Created by HengGe on 2020/6/5.
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
    freopen("input/1016.txt", "r", stdin);
#endif
    string a, b;
    int pa = 0, pb = 0;
    char da, db;
    cin >> a >> da >> b >> db;
    for (auto n:a) {
        if (n == da){
            pa = pa * 10 + da - '0';
        }
    }
    for (auto n:b){
        if (n == db){
            pb = pb * 10 + db - '0';
        }
    }
    printf("%d", pa + pb);

    return 0;
}

//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//    string a, b;
//    int pa = 0, pb = 0;
//    char da, db;
//    cin >> a >> da >> b >> db;
//    for (auto n:a) {
//        if (n == da){
//            pa = pa * 10 + da - '0';
//        }
//    }
//    for (auto n:b){
//        if (n == db){
//            pb = pb * 10 + db - '0';
//        }
//    }
//    printf("%d", pa + pb);
//    return 0;
//}

