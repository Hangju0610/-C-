#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int main() {
    for (int i = 2; i <= 5; i++)
        v.push_back(i);
    v.push_back(7);
    // 2 3 4 5 7
    cout << upper_bound(v.begin(), v.end(), 6) - v.begin() << '\n';
    // 2 3 4 5 7
    // 0 1 2 3 4 에서 근방지점인 4번째 (7보다 6이 더 작으므로)
    cout << lower_bound(v.begin(), v.end(), 6) - v.begin() << '\n';
    // 2 3 4 5 7
    // 0 1 2 3 4 에서 근방지점인 4번째 (7보다 6이 더 작으므로)

    cout << upper_bound(v.begin(), v.end(), 9) - v.begin() << '\n';
    // 2 3 4 5 7
    // 0 1 2 3 4 에서 근방지점인 4번째 (7보다 9가 더 크다)
    cout << lower_bound(v.begin(), v.end(), 9) - v.begin() << '\n';
    // 2 3 4 5 7
    // 0 1 2 3 4 에서 근방지점인 4번째 (7보다 9가 더 크다)

    cout << upper_bound(v.begin(), v.end(), 0) - v.begin() << '\n';
    // 2 3 4 5 7
    // 0 1 2 3 4 에서 근방지점인 4번째 (0보다 2가 더 크다)
    cout << lower_bound(v.begin(), v.end(), 0) - v.begin() << '\n';
    // 2 3 4 5 7
    // 0 1 2 3 4 에서 근방지점인 4번째 (0보다 2가 더 크다)

}

/*
4
4
5
5
0
0

만약 해당 요소가 없을 경우, 다음코드처럼 그 근방 지점을 반환한다.
*/
