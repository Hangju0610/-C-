#include <bits/stdc++.h>
using namespace std;
int main() {
    string a = "abcda";
    string *b = &a;
    cout << b << "\n";
    cout << *b << "\n";
    return 0;
}

/*
출력
0x16db1a4e0
abcda

* 에스터리스크는 역참조 또한 가능하다.
역참조를 걸어 주소값을 기반으로 값을 얻어오는 것이 가능하다.
*/