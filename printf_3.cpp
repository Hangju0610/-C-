#include <bits/stdc++.h>
using namespace std;
int a = 1;
char s = 'a';
string str = "어벤져스";
double b = 1.223123;

int main() {
    printf("아이엠어 아이언맨 : %d\n", a);
    printf("아이엠어 아이언맨 : %c\n", s);
    printf("아이엠어 아이언맨 : %s\n", str.c_str());
    printf("아이엠어 아이언맨 : %lf\n", b);

    return 0;
}

/*
문자열을 printf로 출력할 때 주의점. str.c_str() 함수를 사용해야 한다.
printf를 기반으로 문자열을 출력하려면, string을 문자열에 대한 포인터(char *) 타입으로 변환해주어야 하기 떄문
(따라서 보통 문자열을 출력할 떄는 간단히 cout을 사용하는 편)
*/

/*
아이엠어 아이언맨 : 1
아이엠어 아이언맨 : a
아이엠어 아이언맨 : 어벤져스
아이엠어 아이언맨 : 1.223123
*/