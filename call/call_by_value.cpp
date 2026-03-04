#include <bits/stdc++.h>
using namespace std;
int add(int a, int b) {
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
1

call by value
값에 의한 호출은 매개변수로 전달되는 변수를 모두 함수 내부에서 복사해서 함수를 실행하는 방법
함수 내부에서 전체 복사가 일어나고, 실제 변수와는 다른 주소가 할당
실제 변수와 매개변수로 전달된 변수는 다른 주소값을 가진다.
*/