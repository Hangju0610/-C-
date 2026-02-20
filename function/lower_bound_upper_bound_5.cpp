#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    vector<int> a {1, 2, 3, 3, 3, 3, 4, 100};
    cout << upper_bound(a.begin(), a.end(), 3) - lower_bound(a.begin(), a.end(), 3)<< "\n";

    return 0;
}

/*
4

이렇게 사용하면 특정 value의 요소가 몇개 들어가있는지 확인할 수 있다.
*/
