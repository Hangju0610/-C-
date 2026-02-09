#include <bits/stdc++.h>
using namespace std;
int main() {
    int v[3] = {1, 2, 3};
    int ret[3];
    copy(v, v + 3, ret);
    cout << ret[1] << '\n';
    ret[1] = 100;
    cout << ret[1] << '\n';
    cout << v[1] << '\n';
    return 0;
}
/*
이렇게도 사용 가능하다.
*/