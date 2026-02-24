#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
map<string, string> mp2;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    if (mp[1] == 0) {
        mp[1] = 2;
    }

    for(auto i : mp)
        cout << i.first << " " << i.second;

    return 0;
}

/*
1 2
맵에 요사기 있는지를 확인하고 맵에 요소를 할당하는 로직은 다음코드처럼 구축할 수 있습니다.
다만 앞의 코드는 문제에서 해당 키에 0이 아닌 값이 들어갈 때 활용이 가능합니다.
이미 if문 안에 mp[1] == 0을 해버린 순간 mp[1] = 0이 할당되어 버리기 떄문입니다.

*/