#include <bits/stdc++.h>
using namespace std;
bool check(int n) {
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    
    // 3 이상 부터는, 해당 소수의 제곱 까지 범위만 측정한다.
    // 만약 제곱이 n 이상인 경우, n까지만 측정
    for (int i = 3; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    for (int i = 1; i <= 20; i++) {
        if (check(i)) {
            cout << i << "는 소수입니다.\n";
        }
    }
    return 0;
}

/*
배열 방법이 아닌, 소수를 판별하는 수
*/