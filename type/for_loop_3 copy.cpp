#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    int a[n];
    memset(a, 0, sizeof(a));
    for (int i : a) {
        cout << i << " ";
    }
    return 0;
}

/*
./type/for_loop_3.cpp:6:11: warning: variable length arrays in C++ are a Clang extension [-Wvla-cxx-extension]
    6 |     int a[n];
      |           ^
./type/for_loop_3.cpp:6:11: note: read of non-const variable 'n' is not allowed in a constant expression
./type/for_loop_3.cpp:3:5: note: declared here
    3 | int n;
      |     ^

컴파일 시 에러 발생

Array a가 n의 입력을 받고 int a[n]로 선언하게 되면, 범위기반 for 루프는 에러가 발생할 수 있다.
이는 C++에서 VLA(Variable Length Array)를 지원하지 않지만, 일부 컴파일러(GCC 등)는 확장 기능으로 VLA을 지원할 수 있기 떄문입니다.

Array는 변수의 크기를 기반으로 런타임시기에 크기가 결정되는 VLA라는 특징을 가집니다.

그러나 for_loop 를 할 떄의 루프의 범위는 컴파일 시기에 결정됩니다.
이 때문에 VLA 크기자체가 컴파일 시기에는 0이었다가 런타임에 크기가 결정되기 때문에 에러가 발생되는 원리이다.

즉 Array는 컴파일에 결정된 크기로만 for_loop 를 쓸 수 있다고 보면 된다.
만약 크기가 런타임시에 결정이 되고, 범위 기반 for Loop를 쓰고 싶다면 vector를 써야 합니다.

memset은 메모리 블록을 특정 값으로 초기화하는 C 표준 라이브러리 함수입니다.
void* memset(void* ptr, int value, size_t num);

ptr: 초기화할 메모리 블록의 시작 주소
value: 설정할 값 (0~255 범위의 바이트 값)
num: 초기화할 바이트 수

memset(a, 0, sizeof(a));
-> 
배열 a의 모든 바이트를 0으로 설정
sizeof(a): 배열 a의 전체 크기(바이트)

*/