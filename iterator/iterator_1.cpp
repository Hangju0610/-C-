#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    for (int i = 1; i <= 5; i++)
        v.push_back(i);
    for (int i = 0; i < 5; i++) {
        cout << i << "번째 요소 : " << *(v.begin() + i) << "\n";
        cout << &*(v.begin() + i) << '\n';
    }

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
    }
    cout << '\n';

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
    }
    auto it = v.begin();
    advance(it, 3);
    cout << '\n';
    cout << *it << '\n';
    // cout << v.begin() << '\n'; // 에러

    return 0;
}

/*
출력
0번째 요소 : 1
0x1016ddce0
1번째 요소 : 2
0x1016ddce4
2번째 요소 : 3
0x1016ddce8
3번째 요소 : 4
0x1016ddcec
4번째 요소 : 5
0x1016ddcf0
1 2 3 4 5 
1 2 3 4 5 
4
*/

/*
설명
iterator : 컨테이너가 저장되어 있는 요소의 주소를 가리키는 개체를 말한다.
즉, 포인터를 일반화한 것을 말한다.
ex) 배열의 한 요소의 주소, 리스트의 한 노드의 주소, 스택의 한 지점의 주소
vector, map 등 각각 다르게 구현된 컨테이너들을 일반화된 이터레이터를 통해 쉽게 순회할 수 있다.

다만 주소값을 바로 반환하지는 못하며, &*를 통해 한단계 더 거쳐서 주소값 반환이 가능하다.

vector<int>:: iterator를 auto로도 선언 가능하다. (너무 길기 떄문에)

begin() : 컨테이너의 시작 위치를 반환
end(): 컨테이너의 끝 다음의 위치를 반환하는데 사용
advance(iterator, cnt) : 해당 iterator를 cnt까지 증가시킵니다.

## 이터레이터와 포인터의 차이
이터레이터 : 컨테이너의 범위 안에서 일부 요소를 가리키며, 해당 요소들을 순회할 수 있는 개체
- 컨테이너 개체를 참조하는 것이기 떄문에 이 자체를 제거할 수 없다.
포인터 : 변수의 메모리 주소를 저장하는 개체, 포인터는 delete를 통해 제거가 가능

## 이터레이터 = 일반화된 포인터?
이터레이터는 컨테이너의 구조나 컨테이너 안에 들어가 있는 요소의 타입과는 상관 없이
컨테이너에 저장된 데이터를 순회하는 과정을 담당
즉, 각각의 다른 요소들을 쉽게 탐색할 수 있게 "일반화" 한 장치
*/