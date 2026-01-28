#include <bits/stdc++.h>
using namespace std;
pair<int, int> pi;
tuple<int, int, int> tl;
int a, b, c;

int main() {
    pi = {1, 2}; // 혹은 make_pair(1, 2)로 만들 수 있습니다.
    tl = make_tuple(1, 2, 3);
    a = pi.first;
    b = pi.second;
    cout << a << " : " << b << "\n";
    a = get<0>(tl);
    a = get<1>(tl);
    a = get<2>(tl);
    cout << a << " : " << b << " : " << c << "\n";

    return 0;
}

/*
출력
1 : 2
1 : 2 : 3

tie를 사용하지 않는 경우, 끄집어내기 번거로워 진다.
tuple의 경우 get 함수를 이용해서 끄집어 낼 수 있다.

*/