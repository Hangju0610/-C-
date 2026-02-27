#include <bits/stdc++.h>
using namespace std;
stack<string> stk;
int main() {
    stk.push("엄");
    stk.push("준");
    stk.push("식");
    stk.push("화");
    stk.push("이");
    stk.push("팅");
    while(stk.size()) {
        cout << stk.top() << "\n";
        stk.pop();
    }
    return 0;
}

/*
팅
이
화
식
준
엄

stack : LIFO 구조
삽입 및 삭제에 O(1), 탐색에 O(n)

주로 문자열 폭발, 아름다운 괄호만들기, 짝찾기 키워드 기반으로 이루어진 문제
또한, 교차하지 않고 라는 문장이 나오면 스택을 염두해 두어야 한다.

push(value) -> 해당 value를 스택에 추가
pop() 가장 마지막에 추가한 요소를 지웁니다.
top() 가장 마지막에 있는 요소를 참조합니다.
size() 스택의 크기입니다.
*/