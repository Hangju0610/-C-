#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    vector<int> a {1, 2, 3, 3, 4, 100};
    cout << *lower_bound(a.begin(), a.end(), 100) << "\n"; // 100

    return 0;
}

/*
100

이렇게 사용해서 lower_bound가 가리키는 요소를 출력할 수 있다.
*/
