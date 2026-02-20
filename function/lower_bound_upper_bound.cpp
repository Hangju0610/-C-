#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    vector<int> a {1, 2, 3, 3, 3, 4};
    cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << "\n"; // 2
    cout << upper_bound(a.begin(), a.end(), 3) - a.begin() << "\n"; // 5
    return 0;
}

/*
정렬된 배열에서 어떤 값이 나오는 첫번째 지점 또는 초과하는 지점의 위치를 찾으려면 ??
또한 이분탐색을 쉽게 함수로 구현하려면??

lower_bound() -> 3이 시작되는 최소 시작점
upper_bound() -> 3을 초과하는 지점

a.begin()을 빼는 이유는, lower_bound(), upper_bound()는 해당 자료형으로부터 이터레이터를 반환한다.
따라서 몇번째를 추려내려면 이 이터레이터에서 begin()을 빼주어야 한다.

*/
