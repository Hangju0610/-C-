#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    vector<int> a {1, 2, 3, 3, 3, 4};
    cout << &*lower_bound(a.begin(), a.end(), 3) << '\n';
    cout << &*a.begin() << '\n';
    cout << &*(a.begin() + 1) << "\n";
    cout << &*(a.begin() + 2) << "\n";
    return 0;
}

/*
결과
0x88d000908
0x88d000900
0x88d000904
0x88d000908

이런식으로 어떤 주소값을 반환하는 것을 알 수 있다.

즉, lower_bound(배열의 탐색 시작, 배열의 탐색 끝, 특정 value)
특정 value 값 이상인 첫번째 위치를 찾아 "이터레이터"를 반환한다.
*/
