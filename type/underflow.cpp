#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = -2147483648;
    cout << a << '\n';
    a--;
    cout << a << '\n';
    return 0;
}

/*
2147483647
-2147483648

오버플로와 반대로 취급할 수 있는 결과값보다 작아지게 되면 언더플로가 발생합니다.

*/