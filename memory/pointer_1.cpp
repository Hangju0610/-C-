#include <bits/stdc++.h>
using namespace std;
int i;
string s = "kundol";

int main() {
    // <타입> * <변수명> = <해당 타입의 변수의 주소>
    i = 0;
    int *a = &i;
    cout << &i << '\n';
    cout << a << '\n';
    cout << sizeof(a) << '\n';
    string *b = &s;
    cout << &s << '\n';
    cout << b << '\n';
    cout << sizeof(b) << '\n';

    return 0;
}

/*
출력
0x104a28000
0x104a28000
8
0x104a28008
0x104a28008
8
*/

/*
설명
pointer : 변수의 메모리 주소를 담는 타입이 포인터이다.
포인터는 메모리 동적 할당, 데이터를 복사하지 않고 함수 매개변수로 사용, 클래스 및 구조체를 연결할 때 사용

int *a = &i;
여기서 * 은, 에스터리스크 (와일드카드 아님)라고도 불린다.
pointer를 정의하고 싶을 때는
<타입> * <변수명> = <해당 타입의 변수의 주소>
이렇게 선언한다.
& (참조)

포인터의 크기 - OS가 32bit 라면 4바이트, 64라면 8바이트로 고정되어 있다.

*/