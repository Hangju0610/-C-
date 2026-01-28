#include <bits/stdc++.h>
using namespace std;
int main() {
    double ret = 2.12345;
    int n = 2;
    int a = (int)round(ret / double(n));
    cout << a << "\n";
    return 0;
}

/*
중요!
같은 타입끼리 연산하는 것이 중요하다.
int a = (int)round(ret / double(n));

산술표현식을 평가할 때 같은 타입을 가져야 하나 이게 맞지 않을 경우 암시적 형변환(Implicit type conversion)이 일어납니다.
이 때 다음과 같은 우선순위를 거쳐 형변환이 일어납니다.
예를 들어 double과 fl oat끼리 연산이 일어난다면 double로 통일되어 값을 반환합니다.

● long double (highest)
● double
● float
● unsigned long long
● long long
● unsigned long
● long
● unsigned int
● int (lowest)


*/