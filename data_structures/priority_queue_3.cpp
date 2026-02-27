#include <bits/stdc++.h>
using namespace std;
struct Point {
    int y, x;
};

struct cmp{
    bool operator()(Point a, Point b) {
        return a.x < b.x;
    }
};

priority_queue<Point, vector<Point>, cmp> pq;
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
6
priority_queue<Point, vector<Point>, cmp> pq;
Point 타입의 요소를 저장하는 우선순위 큐를 선언하며, 이 큐는 cmp 구조체를 사용하여 요소를 정렬합니다.
이런식으로도 구현이 가능하다.

operator()
C++에서 함수 호출 연산자라고 불리며, 객체를 함수처럼 호출할 수 있게 해주는 연산자 오버로딩의 한 예
클래스나 구조체 내에 오버로딩함으로써, 해당 타입의 객체에 대한 "호출 가능한 객체" 또는 "함수 객체"를 만들 수 있다.
이는 함수 객체, 우선순위 큐 정렬 등에 사용될 수 있다.


// 
class ClassName {
    public: 반환형 operator()(매개변수목록) {
     // 구현 
    }
};

1. 함수 객체
class Adder {
public: int operator()(int a, int b) {
    return a + b;
    }
};
int main() {
    Adder adder;
    cout << adder(3, 4); // 7을 출력 
    return 0; 
}

Adder 클래스는 operator()를 오버로딩하여 두 정수를 받아 그 합을 반환
adder 객체는 마치 함수처럼 호출될 수 있으며, adder(3,4)는 7을 반환한다.

2. 우선순위큐의 비교연산자
struct cmp{
    bool operator()(const int& a, const int& b) {
        return a > b; // 최소 힙구조
    }
};

priority_queue<Point, vector<Point>, cmp> pq;


cmp는 int 타입의 두 요소를 비교하여 첫 번째 요소가 두 번째 요소보다 큰 경우 true를 반환
이러한 비교 방식을 기준으로 priority_queue는 내부적으로 요소를 정렬한다.
cmp 함수 객체는 최소 힙(min heap)구조의 우선 순위 큐를 만드는 데 사용

왜 우선순위큐에는 반대로 설정해야 할까??
C++의 우선순위큐는 최대 힙을 기본으로 구현이 되어있으며, 가장 큰 요소가 가장 위에 정렬되게 설정되어 있다.
즉, 다음과 같이 했을 때 기본적으로 내림차순 정렬이 되는 것이다.

priority_queue<int> pq2; // 내림차순

이와 동일하게 < 오퍼레이터에 맞게 x < a.x 로 설정하게 되면 우선순위큐의 가장 맨 위에 가장 큰 요소가 오게 된다.

보통 vector에서 정렬할 때 x < a.x 를 설정하면 1,2,3 오름차순과는 반대인 셈이라고 보면 된다.

그렇기 때문에 가장 작은 값을 우선순위 큐 맨 위에서 뽑게 하려면 x > a.x 이런식으로 정의해야 한다.
*/