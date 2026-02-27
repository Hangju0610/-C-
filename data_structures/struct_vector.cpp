#include <bits/stdc++.h>
using namespace std;
struct Point{
    int y, x;
};

bool cmp(const Point & a, const Point & b) {
    return a.x > b.x;
}

vector<Point> v;
int main() {
    for (int i = 10; i >= 1; i--) {
        v.push_back({i, 10 - i});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it : v)
        cout << it.y << " : " << it.x << "\n";
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

커스텀한 자료구조를 만들 때 보통 class와 struct를 쓰지만 코딩테스트에서는 struct만 알아도 충분합니다.
둘의 차이는 struct의 멤버변수는 기본적으로 public이며 상속이 안되며 class의 멤버변수는 기본적으로 private이며 상속이 됩니다.
*/