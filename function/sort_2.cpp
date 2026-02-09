#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
int main() {
    for (int i = 10; i >= 1; i--) {
        v.push_back({i, 10 - i});
    }
    sort(v.begin(), v.end());
    for (auto it : v)
        cout << it.first << " : " << it.second << "\n";
    return 0;
}

/*
1 : 9
2 : 8
3 : 7
4 : 6
5 : 5
6 : 4
7 : 3
8 : 2
9 : 1
10 : 0

(first 순으로 pair가 오름차순 된 것을 확인)
pair를 기바능로 만들어진 vector의 경우, 따로 설정하지 않으면 first, second 순으로 차례차례 오름차순 정렬됩니다.
*/