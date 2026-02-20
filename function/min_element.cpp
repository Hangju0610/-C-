#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a = *min_element(v.begin(), v.end());
    auto b = min_element(v.begin(), v.end());
    cout << a << '\n'; // 1
    cout << (int)(b - v.begin()) << '\n'; // 0

    return 0;
}

/*
1
0

배열 중 가장 작은 요소를 추출하는 함수
max_element와 동일하게 동작
*/