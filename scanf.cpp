#include <bits/stdc++.h>
using namespace std;
int a;
double b;
char c;
int main() {
    scanf("%d %lf %c", &a, &b, &c);
    printf("%d\n", a);
    printf("%lf\n", b);
    printf("%c\n", c);
    return 0;
}
/*
%d는 int 타입
%lf는 double 타입
%c는 char 타입을 받는다.
%s는 string 형식
%ld는 long long 형식
*/

/*
int scanf ( const char * format, ... );
첫번째 매개변수로 바든ㄴ 형식을 지정해서 입력 받는다.
*/

/* 입력 
23330
233.23123
a 
출력
23330
233.231230
a
*/
