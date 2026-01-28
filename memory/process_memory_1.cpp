#include <bits/stdc++.h>
using namespace std;
int a;
int b = 0;
const int c = 0;
int main() {
    static int d;
    static int e = 0;
    return 0;
}


/*
프로세스 메모리 구조와 정적 할당과 동적 할당
프로세스 메모리 구조

운영체제는 프로세스에 적절한 메모리를 할당하는데, 다음 구조를 기반으로 할당합니다.
위에서부터 stack, heap, 데이터 영역(BSS segment, Data segment), code 영역으로 나누어집니다.
stack : 지역변수, 매개변수, 함수가 저장되고 컴파일 시에 크기가 결정됩니다. 그러나 함수가 함수를 호출하는 등에 따라
런타임시에도 크기가 변경됩니다. (동적인 특징)
heap : 힙은 동적 할당할 때 사용되며 런타임 시 크기가 결정됩니다. [동적인 특징]
데이터 영역 : BSS영역과 Data 영역으로 나뉘고 정적 할당에 관한 부분을 담당합니다. [정적인 특징]
코드 영역 : 소스코드가 들어갑니다. [정적인 특징]

정적 할당
정적 할당은 컴파일 단계에서 메모리를 할당하는 것을 말합니다.
BSS segment와 Data segment, code / text segment로 나뉘어서 저장됩니다.

BSS segment : 전역변수, static, const로 선언되어 있는 변수 중, 0으로 초기화 또는 초기화가 어떠한 값으로도 되어있지 않은
변수들이 이 메모리 영역에 할당됩니다.
 */