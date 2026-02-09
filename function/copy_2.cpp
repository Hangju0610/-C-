#include <bits/stdc++.h>
using namespace std;
const int n = 3;
int main() {
    int v[n] = {1, 2, 3};
    int ret[n];
    copy(v, v + n, ret);
    cout << ret[1] << '\n';
    ret[1] = 100;
    cout << ret[1] << '\n';
    cout << v[1] << '\n';
    return 0;
}

/*
2
100
2

Array의 경우 다음과 같이 사용한다.
C++에서 배열의 크기는 컴파일 시간에 상수여야 한다.
n이 변수인 int v[n] 및 int ret[n]의 사용은 표준을 준수하지 않으며,
모든 C++ 컴파일러에서 컴파일되지 않을 수 있기 때문에 const 키워드를 통해 n이 상수임을 선언해주어야 합니다.
*/