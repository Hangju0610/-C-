#include <bits/stdc++.h>

using namespace std;

int i;
int main() {
    cout << &i << '\n';
    i = 0;
    cout << &i << '\n';
    return 0;
}

/*
0x10086c000
0x10086c000

변수에 값을 할당해도 주소는 변하지 않는다.
왜? 메모리의 첫번째 값은 주소.
나머지에 value를 저장한다.
*/