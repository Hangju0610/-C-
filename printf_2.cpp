#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
double a = 1.23456789;
int b = 12;
int c = 2;
int main() {
    printf("%.6lf\n", a);
    printf("%02d\n", b);
    printf("%04d\n", c);
    return 0;
}

/*
앞에 숫자 형식을 붙여주면, 출력 형식을 조정할 수 있다.

출력
1.234568
12
0002
*/