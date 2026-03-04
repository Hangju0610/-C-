#include <bits/stdc++.h>
using namespace std;
int fact_rec(int n) {
    if (n == 1 || n == 0)
        return 1;
    return n * fact_rec(n - 1);
}

int fact_for(int n) {
    int ret = 1;
    for (int i = 1; i <= n; i ++) {
        ret *= i;
    }
    return ret;
}

int n = 5;
int main() {
    cout << fact_for(n) << '\n';
    cout << fact_rec(n) << '\n';
    return 0;
}

/*
120
120

재귀함수
- 재귀함수(Recursion)는 정의 단계에서 자신을 재참조하는 함수
- 전달되는 상태인 매개변수가 달라질 뿐 똑같은 일을 하는 함수
- 큰 문제를 작은 부분문제로 나눠서 풀 때 사용합니다.
 */