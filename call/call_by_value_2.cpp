#include <bits/stdc++.h>
using namespace std;
vector<int> v(3, 0);
void go(vector<int> v) {
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
0
0

call by value
vector를 값에 의한 호출을 하면 다음과 같이 된다.
vector를 넘겨서 수정해도 아무런 반영이 일어나지 않는다.
*/