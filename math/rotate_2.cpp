#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    rotate(v.begin() + 1, v.begin() + 2, v.begin() + 5);
    for (int i : v)
        cout << i << ' ';
    return 0;
}

/*
배열의 일부분만 회전시키고 싶다면??
시작 지점 - 1번째 지점 : v.begin() + 1
한칸 움직임 - 시작 지점 + 1 = v.begin() + 2
4번째 지점까지만 : v.begin() + 5 (포함되지 않는 범위를 넣어야 하기 떄문에)

*/