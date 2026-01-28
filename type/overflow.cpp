#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 2147483647;
    cout << a << '\n';
    a++;
    cout << a << '\n';
    return 0;
}

/*
2147483647
-2147483648

최대 범위를 벗어나게 되면, 최댓값 + 1이 아닌 최솟값으로 돌아간다.
이를 UB(unexpected Behavior)라고도 합니다.
*/