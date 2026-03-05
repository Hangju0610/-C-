#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    rotate(v.rbegin(), v.rbegin() + 1, v.rend());
    for (int i : v)
        cout << i << ' ';
    return 0;
}

/*
시계 방향으로 돌리고 싶다면??

rbegin(), rend()를 사용한다.
rbegin() : 배열의 마지막번쨰를 나타내는 이터레이터
rend() : 오른쪽부터 시작해 배열의 시작 전의 위치를 나타내는 이터레이터

rotate 동작 원리
rotate()는 [first, last) 영역의 요소 중 [first, middle) 을 [middle, last) 뒤에 놓는 함수
메모리 셀로 생각하면 쉽게 이해가 간다.

*/