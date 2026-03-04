#include <bits/stdc++.h>
using namespace std;
int add(int &a, int b) {
    a += 10;
    cout << a << '\n';
    return a + b;
}

int main() {
    int a = 1;
    int b = 2;
    int sum = add(a, b);
    cout << a << '\n';
    return 0;
}

/*
11
11

참조에 의한 호출
변수의 주소를 매개변수로 함수에 전달하는 방법

함수 내부에서 해당 매개변수를 변경하게 되면, 실제 원본변수에도 반영
*/