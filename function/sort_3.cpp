#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}

int main() {
    for (int i = 10; i >= 1; i--) {
        v.push_back({i, 10 - i});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto it : v)
        cout << it.first << " : " << it.second << "\n";

    return 0;
}

/*
10 : 0
9 : 1
8 : 2
7 : 3
6 : 4
5 : 5
4 : 6
3 : 7
2 : 8
1 : 9

first는 내림차순, second는 오름차순 정렬하고 싶은 경우는,
커스텀 비교함수 cmp를 만들어 매개변수로 넣으면 됩니다. (보통 cmp라는 함수명을 많이 씁니다.)
*/