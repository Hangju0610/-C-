#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
    for (int i = 1; i <= 5; i++) {
        v.push_back(i);
        v.push_back(i);
    }

    for(int i : v)
        cout << i << " ";
    // 중복되지 않은 요소로 채운 후, 그 다음 이터레이터를 반환한다.
    cout << "\n";
    auto it = unique(v.begin(), v.end());
    cout << it - v.begin() << "\n";
    // 앞에서부터 중복되지 않게 채운 후, 나머지 요소들은 그대로 둔다.
    for (int i : v)
        cout << i << ' ';
    cout << "\n";
    return 0;
}

/*
1 1 2 2 3 3 4 4 5 5 
5
1 2 3 4 5 3 4 4 5 5 

unique는 범위 안의 요소 중 앞에서부터 서로를 비교해가며 중복되는 요소를 제거하고
나머지 요소들은 삭제하지 않고 그대로 두는 함수입니다.

예시

1, 1, 2, 2, 3, 3
1. 0 인덱스에 1 존재
2. 0 인덱스 1, 1 인덱스 1 존재. 1 제거
3. 2 인덱스 2, 2로 변경
4. 3 인덱스 2, 2 삭제
이런식으로 해 나가면서, 앞에서부터! 중복된 요소를 하나씩 제거해 간다.
결과는 
1, 2, 3, 2, 3, 3
이런식으로 되는데, unique는 채워넣지 않은 영역의 요소는 건드리지 않는 특이한 점이 있다.
*/