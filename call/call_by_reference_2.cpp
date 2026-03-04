#include <bits/stdc++.h>
using namespace std;
vector<int> v(3, 0);
void go(vector<int> &v) {
    v[1] = 100;
}

int main() {
    go(v);
    for(int i : v)
        cout << i << '\n';
    return 0;
}

/*
0
100
0

call by reference
vector를 값에 의한 호출을 하면 다음과 같이 된다.
원본 vector에 반영된다.
*/