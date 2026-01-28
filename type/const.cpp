#include <bits/stdc++.h>
using namespace std;

void printConstRef(const int& x) {
    // x = 100; // 에러 발생, 여기서 x는 매개변수로 받아온 const int x를 참조
    cout << x;
}

int main() {
    int x = 10;
    printConstRef(x);

    return 0;
}


/*
const 키워드 : 수정할 수 없는 변수를 정할 때 사용된다. 즉 상수.
이 문제와 같이 함수 매개변수로 넘겼을 떄 매개변수 수정도 방지할 수 있다.

*/