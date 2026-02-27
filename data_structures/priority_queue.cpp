#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq; // 오름차순
priority_queue<int> pq2; // 내림차순
priority_queue<int, vector<int>, less<int>> pq3; // 내림차순

int main() {
    for (int i = 5; i >= 1; i--) {
        pq.push(i);
        pq2.push(i);
        pq3.push(i);
    }
    while (pq.size()) {
        cout << pq.top() << " : " << pq2.top() << " : " << pq3.top() << "\n";
        pq.pop(); pq2.pop(); pq3.pop();
    }

    return 0;
}

/*
우선순위 큐 : 각 요소에 어떠한 우선순위가 추가로 부여되어 있는 컨테이너를 의미

우선순위 큐에서 우선순위가 높은 요소는 우선순위가 낮은 요소보다 먼저 제공된다.
일부 구현에서 두 요소의 우선 순위가 같으면 대기열에 포함된 순서에 따라 제공
다른 구현에서 동일한 우선 순위를 가진 요소의 순서는 정의되지 않은 상태로 유지

힙은 완전이진트리로, 최소힙 또는 최대힙이 존재
삽입, 삭제, 탐색, 수정에 대해 O(logN)의 시간복잡도를 갖는다.

단순하게 int형 우선순위 큐는 다음 코드 처럼 greater<타입>을 써서 오름차순, less<타입>을 써서 내림차순으로 변경할 수 있다.
기본은 내림차순이다.

메서드는 stack과 같다.

1 : 5 : 5
2 : 4 : 4
3 : 3 : 3
4 : 2 : 2
5 : 1 : 1

*/