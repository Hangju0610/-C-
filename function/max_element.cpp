#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a = *max_element(v.begin(), v.end());
    auto b = max_element(v.begin(), v.end());
    cout << a << '\n'; // 10
    cout << (int)(b - v.begin()) << '\n'; // 9

    return 0;
}

/*
10
9

배열 중 가장 큰 요소를 추출하는 함수이다.
이터레이터를 반환하며, *을 통해 값을 얻을 수 있고, 이를 기반으로 해당 최댓값의 인덱스를 추출할 수 있다.
*/