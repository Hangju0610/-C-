#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 2, 3};
    cout << (int)a.size() - 10 << '\n'; // -7
    return 0;
}

/*
왜?
vector의 size() 메서드는 size_t 타입(부호 없는 정수형) 을 반환합니다.
이 타입은 일반적으로 64비트 환경에서는 unsigned long 또는 unsigned long long으로 정의되어 있습니다.

따라서 v.size() - 10 과 같이 음수가 될 수 있는 연산을 수행하면, 결과가 음수가 아닌 매우 큰 양수로 나타날 수 있습니다.
*/