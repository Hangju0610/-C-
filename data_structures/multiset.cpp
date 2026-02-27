#include <bits/stdc++.h>
using namespace std;
multiset<int> s;
int main() {
    for (int i = 5; i >= 1; i--) {
        s.insert(i);
        s.insert(i);
    }

    for(int it : s) cout << it << " ";
    cout << '\n';
    return 0;
}

/*
1 1 2 2 3 3 4 4 5 5 

multiset : 중복되는 요소도 집어넣을 수 있는 자료구조
메서드는 map과 동일하다.
*/