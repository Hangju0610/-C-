#include <bits/stdc++.h>
using namespace std;
const int mxy = 3;
const int mxx = 4;
int a[mxy][mxx];
int main() {
    for (int i = 0; i < mxy; i++) {
        for (int j = 0; j < mxx; j++) {
            a[i][j] = (i + j);
        }
    }

    // goods;
    for (int i = 0; i < mxy; i++) {
        for (int j = 0; j < mxx; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }

    // bad
    for (int i = 0; i < mxx; i++) {
        for (int j = 0; j < mxy; j++) {
            cout << a[j][i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}

/*
0 1 2 3 
1 2 3 4 
2 3 4 5 
0 1 2 
1 2 3 
2 3 4 
3 4 5 

첫번째 차원 >> 2번째 차원 순으로 탐색하는게 성능이 좋다.
이는 C++에서 캐시를 첫번째 차원을 기준으로 하기 떄문에, 캐시관련 효율성 떄문에
탐색을 하더라도 순서를 지키는 것이 좋다.
*/