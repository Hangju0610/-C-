#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    // pair의 첫 번째 요소는 정렬할 값, 두 번째 요소는 원래 인덱스를 나타낸다.
    vector<pair<int, int>> pairs = {{5, 1}, {2, 2}, {5, 3}, {3, 4}, {2, 5}};
    cout << "Original: ";
    for (const auto& p : pairs) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << "\n";
    sort(pairs.begin(), pairs.end(), cmp);
    cout << "Sorted with sort: ";
    for (const auto &p : pairs) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << "\n";

    // 원본 데이터로 초기화
    pairs = {{5, 1}, {2, 2}, {5, 3}, {3, 4}, {2, 5}};

    stable_sort(pairs.begin(), pairs.end(), cmp);

    cout << "Sorted with stable_sort: ";
    for (const auto &p : pairs) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << "\n";

    return 0;
}

/*
Original: (5, 1) (2, 2) (5, 3) (3, 4) (2, 5) 
Sorted with sort: (2, 2) (2, 5) (3, 4) (5, 1) (5, 3) 
Sorted with stable_sort: (2, 2) (2, 5) (3, 4) (5, 1) (5, 3) 

그러나 sort()의 경우 (2, 2), (2, 5) 이렇게 나올수도 있고,
(2, 5), (2, 2) 이렇게 나올 수도 있다는 것이며 stable_sort()는 무조건 기존의 순서를 지켜줍니다.
즉, 같은 값일 경우 (2,2) 가 (2, 5)보다 원래 앞에 있었으므로 (2, 2), (2, 5) 이렇게 나오게 됩니다.

- sort 함수는 불안정 정렬 알고리즘을 사용합니다. 이는 같은 값을 가진 요소들의 들어온 순서를 정렬후에 보존하지 않습니다.
- stable_sort 함수는 안정 정렬 알고리즘을 사용합니다. 이는 같은 값을 가진 요소들의 들어온 순서를 정렬후에도 보존합니다.
*/