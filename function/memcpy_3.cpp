#include <bits/stdc++.h>
using namespace std;
int main(void) {
    vector<int> v{1, 2, 3};
    vector<int> ret(3);
    memcpy(&ret, &v, 3 * sizeof(int));

    cout << ret[1] << "\n";
    ret[1] = 100;
    cout << ret[1] << '\n';
    cout << v[1] << '\n';
    return 0;
}
/*
2
100
100

memcpy()는 Trivially Copyable인 타입이 아닌 경우, 함수 자체가 제대로 동작하지 않습니다.

src가 가리키는 객체로부터 dest가 가리키는 객체로 바이트 단위로 count만큼 복사합니다.
만약 객체들이 겹치거나 만약 단순 복사 가능하지 않은 경우(이를 Trivially Copyable 이라고 함)
해당 함수는 올바르게 동작하지 않을 수 있습니다.
*/