#include <bits/stdc++.h>
using namespace std;
int a[3] = {1, 2, 3};
int a2[] = {1, 2, 3, 4};
int a3[10];
int main() {
    for (int i = 0; i < 3; i++)
        cout << a[i] << " ";
    cout << "\n";
    for (int i : a)
        cout << i << " ";
    cout << "\n";

    for (int i = 0; i < 4; i++)
        cout << a2[i] << " ";
    cout << "\n";
    for (int i : a2)
        cout << i << " ";
    cout << "\n";

    for (int i = 0; i < 10; i++)
        a3[i] = i;

    for (int i = 0; i < 10; i++)
        cout << a3[i] << " ";
    cout << "\n";
    for (int i : a3)
        cout << i << " ";
    cout << "\n";

    return 0;
}

/*
1 2 3
1 2 3
1 2 3 4
1 2 3 4
0 1 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9

C++에서 Array
정적배열입니다. 선언할 때 보통 크기를 설정해서 연산 진행
연속된 메모리 공간에 위치한 같은 타입의 요소들의 모음이며, 숫자인덱스를 기반으로 랜덤접근이 가능하며, 중복을 허용한다.

c스타일 선언 : int a[10]
std스타일 선언 : array<int, 10> a;

vector와는 달리 메서드가 없다. 배열의 크기를 정해서 선언할 수 있으며,
크기를 정하지 않고 선언하되, 배열을 중괄호로 요소들을 할당할 수도 있다.
*/