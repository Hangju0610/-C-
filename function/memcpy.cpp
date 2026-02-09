#include <bits/stdc++.h>
using namespace std;
int main() {
    int v[3] = {1, 2, 3};
    int ret[3];
    memcpy(ret, v, sizeof(v));
    cout << ret[1] << "\n";
    ret[1] = 100;
    cout << ret[1] << "\n";
    cout << v[1] << "\n";
    return 0;
}

/*
2
100
2

어떤 변수를 깊은 복사하고 싶을 때는 memcpy()와 copy()를 사용한다.
memcpy() : Array를 복사할 때 사용

copy() : Array, vector에 모두 사용

void * memcpy ( void * destination, const void * source, size_t num );

memcpy()는 어떤 변수의 메모리에 있는 값들을 다른 변수의 “특정 메모리값”으로 복사할 때 사용

*/