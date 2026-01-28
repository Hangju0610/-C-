#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int arr[10];

    cout << "int의 크기: " << sizeof(int) << " 바이트" << "\n";
    cout << "a의 크기: " << sizeof(a) << " 바이트" << "\n";
    cout << "arr 배열의 전체 크기: " << sizeof(arr) << " 바이트" << "\n";
    cout << "arr 배열의 요소 개수: " << sizeof(arr) / sizeof(arr[0]) << "\n";
    return 0;
}

/*
sizeof : C++에서 컴파일 타임 연산자로, 피연산자의 메모리 크기(바이트 단위)를 반환한다.
사용법 : 괄호 안에 타입을 넣거나, sizeof x로 사용

반환 값 : size_t형으로, 이는 부호 없는 정수형 타입이 된다.
sizeof(arr) / sizeof(arr[0])는 배열의 요소 개수를 구하는 전형적인 기법

int의 크기: 4 바이트
a의 크기: 4 바이트
arr 배열의 전체 크기: 40 바이트
arr 배열의 요소 개수: 10
*/