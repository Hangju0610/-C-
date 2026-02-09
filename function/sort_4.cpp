#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b) {
    return a < b;
}

vector<int> v = {3, 10, 4, 11};
int main() {
    sort(v.begin(), v.end(), cmp);
    for(int i : v)
        cout << i << "\n";
    return 0;
}
/*
3
4
10
11

sort()는 각각의 요소들을 cmp함수가 true 가 뜨는 “요소들의 순서”로 바꿔줍니다.
*/