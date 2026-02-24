#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
map<string, string> mp2;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    if (mp.find(1) == mp.end()) { 
        mp[1] = 2;
    }

    for(auto i : mp)
        cout << i.first << " " << i.second;

    return 0;
}

/*
1 2

만약 문제에서 0이 들어가는 것을 비교하기 귀찮다면 다음 코드를 기반으로 작성하면 됩니다.

*/