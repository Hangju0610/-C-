#include <bits/stdc++.h>
using namespace std;
int main() {
    int cnt = 0;
    int a[5] = {
        0,
    };
    while (++cnt != 10)
    {
        for (int i = 0; i < 5; i++)
            a[i] = i;
            a[5] = {
                0,
            };
            for (int i : a)
                cout << i << " ";
        
    }
    return 0;
}

/*
int a[5] = {0, };
0으로 초기화 한다는 의미.
T myarray[N] = {0, };

하지만 이렇게 초기화하는 것은 초반에 한번하는 정적초기화로써만 유효하다.
동적 초기화로써는 유효하지 않다.

출력
0 1 2 3 4 0 1 2 3 4 0 1 2 3 4 0 1 2 3 4 0 1 2 3 4 0 1 2 3 4 0 1 2 3 4 0 1 2 3 4 0 1 2 3 4
*/