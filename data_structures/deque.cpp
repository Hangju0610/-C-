#include <bits/stdc++.h>
using namespace std;
int main() {
    deque<int> dq;
    dq.push_front(1);
    dq.push_back(2);
    dq.push_back(3);
    cout << dq.front() << "\n";
    cout << dq.back() << "\n";
    cout << dq.size() << "\n";
    dq.pop_back();
    dq.pop_front();
    cout << dq.size() << "\n";

    return 0;
}

/*
1
3
3
1

deque : 앞뒤로 삽입, 삭제, 참조가 가능한 자료구조입니다.
*/