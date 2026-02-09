#include <bits/stdc++.h>
using namespace std;
const int max_n = 1004;
int a[max_n];
int a2[max_n][max_n];

int main() {
    memset(a, -1, sizeof(a));
    memset(a2, 0, sizeof(a2));
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    return 0;
}
/*
-1 -1 -1 -1 -1 -1 -1 -1 -1 -1 %

void * memset ( void * ptr, int value, size_t num );
memset()은 바이트단위로 초기화를 하며, 0, -1, char형의 하나의 문자(a,b,c..)으로 초기화 할 때만 사용

앞의 코드를 보듯이 fi ll 보다는 간편하게 초기화가 가능

0 또는 -1이란 값으로 초기화할 때는 memset을 쓰는 것이 좋습니다.

그러나 0, -1 이외의 숫자는 절대 이 memset()으로 초기화를 할 수 없다.
*/