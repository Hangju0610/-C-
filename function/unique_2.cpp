#include <bits/stdc++.h>
using namespace std;
vector<int> v{2, 2, 1, 1, 2, 2, 3, 3, 5, 6, 7, 8, 9};
int main() {
    auto it = unique(v.begin(), v.end());
    for (int i : v)
        cout << i << " ";
    cout << '\n';
    return 0;
}

/*

1) 1, 1, 2, 2, 3, 3, 5, 6, 7, 8, 9 인 경우

1 2 3 5 6 7 8 9 7 8 9

2) 2, 2, 1, 1, 2, 2, 3, 3, 5, 6, 7, 8, 9 인 경우
2 1 2 3 5 6 7 8 9 6 7 8 9 

이렇게 앞에서 부터 중복을 제거하기 때문에, 전체적으로 봤을 때, 중복이 발생할 수 있다.
why? 앞에서부터 서로를 비교해가며 중복된 요소를 제거하기 때문에.
*/