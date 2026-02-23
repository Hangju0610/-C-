#include <bits/stdc++.h>
using namespace std;
list<int> a;
void print(list <int> a) {
    for(auto it : a) cout << it << " ";
    cout << "\n";
}

int main() {
    for (int i = 1; i <= 3; i++)
        a.push_back(i);
    for (int i = 1; i <= 3; i++)
        a.push_front(i);

    auto it = a.begin();
    it++;
    a.insert(it, 1000);

    print(a);

    it = a.begin();
    it++;
    a.erase(it);
    print(a);

    a.pop_front();
    a.pop_back();
    print(a);

    cout << a.front() << " : " << a.back() << "\n";
    a.clear();
    return 0;
}

/*
3 1000 2 1 1 2 3 
3 2 1 1 2 3 
2 1 1 2 
2 : 2

list : 연결리스트(linked list)입니다. 
요소가 인접한 메모리 위치에 저장되지 않는 선형 자료구조입니다.
랜덤접근은 불가능하며, 오로지 순차적 접근만 가능합니다.

요소들은 next, prev라는 포인터로 연결되어 이루어지며, 중복을 허용합니다.
이는 데이터를 감싼 노드를 포인터로 연결해서 공간적인 효율성을 극대화시킨 자료구조이다.

삽입과 삭제가 O(1)이 걸리며, k번째 요소를 참조한다 했을 때 O(k)가 걸립니다.

싱글연결리스트 : next 포인터밖에 존재하지 않으며, 한 방향으로만 데이터가 연결
이중연결리스트 : prev, next 두개의 포인터로 양방향으로 데이터가 연결

원형 연결리스트 : 마지막 노드와 첫번째 노드가 연결되어 원을 형성한다.
싱글연결 리스트와 이중연결리스트 둘다 구현 가능

메서드
push_front(value): 리스트의 앞에서 부터 value를 넣습니다.
push_back(value): 뒤에서부터 value를 넣습니다.

insert(idx, value)
iterator insert (const_iterator position, const value_type& val);
요소를 몇번째에 삽입합니다.

erase(idx)
iterator erase (const_iterator position);
리스트의 idx번째 요소를 지웁니다.

pop_front() : 첫번째 요소를 지웁니다.
pop_back() : 맨 끝 요소를 지웁니다.
front() : 맨 앞 요소를 참조합니다.
back() : 맨 뒤 요소를 참조합니다.
clear() : 모든 요소를 지웁니다.

참고
랜덤접근 : 직접 접근이라고도 불리며, 동일한 시간에 배열과 같은 순차적인 데이터가 존재할때, 임의의 인덱스에 해당하는 데이터에 접근할 수 있는 기능
vector, Array와 같은 배열은 랜덤 접근이 가능해서 k번째 요소에 접근할 때 O(1)이 걸린다.
순차적 접근: 랜덤접근의 반대이며, 데이터를 저장된 순서대로 검색해야 하는 방식, 연결리스트, 스택, 큐는 순차적 접근
k번째 요소에 접근할 때 O(k)이 걸린다.
*/