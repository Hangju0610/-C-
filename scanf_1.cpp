#include <bits/stdc++.h>
using namespace std;
// scanf를 활용해 실수타입을 정수 타입으로 받아보기
int a, b;
double c;
int main() {
    scanf("%d.%d", &a, &b);
    printf("\n%d %d\n", a, b);

    scanf("%lf", &c);
    printf("%lf\n", c);
}
/*
입력
3.22
3.22

출력
3 22
3.2200000
*/


