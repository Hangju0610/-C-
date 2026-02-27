#include <bits/stdc++.h>
using namespace std;
struct Point {
    int y, x;
    Point(int y, int x) : y(y), x(x){}
    Point() { y = -1;
        x = -1;
    }
    bool operator < (const Point & a) const {
        return x > a.x;
    }
};

priority_queue<Point> pq;

int main() {
    pq.push({1, 1});
    pq.push({2, 2});
    pq.push({3, 3});
    pq.push({4, 4});
    pq.push({5, 5});
    pq.push({6, 6});
    cout << pq.top().x << "\n";
    return 0;
}

/*
1

< 연산자에 x > a.x를 했기 때문에 분명 내림차순으로 정렬되어 6이 출력되어야 하지만, 1이 출력되었다.

이는 우선순위 큐에 커스텀 정렬을 넣을 때 반대로 넣어야 하는 특징 때문이다.

6 반대로 할 경우 6이 나온다.

가장 최소를 끄집어 내고 싶은 로직이라면 >
최대라면 < 이런식으로 설정하면 된다.
*/