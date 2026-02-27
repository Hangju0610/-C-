#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int main() {
    for (int i = 1; i <= 10; i++)
        q.push(i);
    
    while(q.size()) {
        cout << q.front() << ' ';
        q.pop();
    }
    return 0;
}

/*
1 2 3 4 5 6 7 8 9 10

Queue : 선입선출 (FIFO) 자료구조
삽입 및 삭제 O(1), 탐색 O(n)

push(value) value를 큐에 추가합니다.
pop() 가장 앞에 있는 요소를 제거합니다.
size() 큐의 크기입니다.
front() 가장 앞에 있는 요소를 참조합니다.
*/