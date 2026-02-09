#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> s{4, 3, 3, 5, 1, 2, 4, 3, 1};
    s.erase(unique(s.begin(), s.end()), s.end());
    for(int i : s)
        cout << i << " ";
    cout << "\n";

    vector<int> s2{4, 3, 3, 5, 1, 2, 4, 3, 1};
    sort(s2.begin(), s2.end());
    s2.erase(unique(s2.begin(), s2.end()), s2.end());
    for(int i : s2)
        cout << i << " ";
    cout << "\n";
    return 0;
}

/*
4 3 5 1 2 4 3 1 
1 2 3 4 5 

따라서, unique를 사용할 경우 꼭 sort()와 같이 사용해야 한다.
sort()를 써야, 우리가 예상하는 로직인 중복된 수를 제거한 배열이 나오게 된다.

다음 코드와 같이 erase, unique, sort를 같이 써야 한다.
*/