#include <bits/stdc++.h>
using namespace std;
pair<int, int> pi;
tuple<int, int, int> tl;
int a, b, c;

int main() {
    pi = {1, 2}; // 혹은 make_pair(1, 2)로 만들 수 있습니다.
    tl = make_tuple(1, 2, 3);
    tie(a, b) = pi; // a = pi.first; b = pi.second; 로 끄집어 낼 수도 있다.
    cout << a << " : " << b << "\n";
    tie(a, b, c) = tl;
    cout << a << " : " << b << " : " << c << "\n";

    return 0;
}

/*
출력
1 : 2
1 : 2 : 3

pair와 tuple은 타입이나 자료구조는 아니다.
C++에서 제공하는 utility 라이브러리 헤더의 템플릿 클래스이며, 자주 사용된다.

pair는 first와 second라는 멤버변수를 가지는 클래스이며, 두가지 값을 담아야 할 때 사용합니다.
tuple은 세가지 이상의 값을 담을 때 쓰는 클래스입니다.

tie = pair 혹은 tuple의 값을 끄집어낼수 있다.


*/