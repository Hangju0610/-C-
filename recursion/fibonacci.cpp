#include <bits/stdc++.h>
using namespace std;
int fibo(int n) {
    cout << "fibo : " << n << '\n';
    if (n == 0 || n == 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int n = 5;
int main() {
    cout << fibo(n) << '\n';
    return 0;
}

/*
fibo : 5
fibo : 4
fibo : 3
fibo : 2
fibo : 1
fibo : 0
fibo : 1
fibo : 2
fibo : 1
fibo : 0
fibo : 3
fibo : 2
fibo : 1
fibo : 0
fibo : 1
5

재귀함수 사용시 주의점
- 반드시 기저사례(종료 조건)을 작성해야 한다.
- 사이클이 있다면 쓰면 안된다. -> 무한반복이다.
- 반복문으로 될 것 같으면 반복문으로 (함수 호출에 대한 코스트가 든다)

기저사례는 맨 앞에 두는게 좋은데,
1. 효율성
2. 무한재귀 방지
3. 논리적 흐름
*/