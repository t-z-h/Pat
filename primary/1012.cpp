//
// Created by HengGe on 2020/6/1.
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
    freopen("input/1012.txt", "r", stdin);
#endif
    vector<int> vi[5];
    int N, temp, A1 = 0, A2 = 0, A5 = 0;
    float A4 = 0;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> temp;
        vi[temp % 5].push_back(temp);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < vi[i].size(); j++) {
            if (i == 0 && vi[i][j] % 2 == 0) A1 += vi[i][j];
            else if (i == 1 && j % 2 == 0) A2 += vi[i][j];
            else if (i == 1 && j % 2 != 0) A2 -= vi[i][j];
            else if (i == 3) A4 += vi[i][j];
            else if (i == 4 && vi[i][j] > A5) A5 = vi[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        if (i != 0) printf(" ");
        if ((i == 0 && A1 == 0) || (i != 0 && vi[i].empty())) {
            printf("N");
            continue;
        }
        if (i == 0) printf("%d", A1);
        else if (i == 1) printf("%d", A2);
        else if (i == 2) printf("%lu", vi[2].size());
        else if (i == 3) printf("%.1f", A4 / vi[3].size());
        else if (i == 4) printf("%d", A5);
    }

    return 0;
}

