#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
    for (int i = 1; i <= 10; i++)
        v.push_back(i);
    for (int a : v)
        cout << a << " ";
    cout << "\n";
    v.pop_back();

    for(int a : v)
        cout << a << " ";
    cout << "\n";

    v.erase(v.begin(), v.begin() + 3);
    for(int a : v)
        cout << a << " ";
    cout << "\n";

    auto a = find(v.begin(), v.end(), 100);
    if (a == v.end())
        cout << "not found" << "\n";

    fill(v.begin(), v.end(), 10);
    for(int a : v)
        cout << a << " ";
    cout << "\n";
    v.clear();
    cout << "아무것도 없을까??\n";
    for(int a : v)
        cout << a << " ";
    cout << "\n";
    return 0;
}

/*
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9 
4 5 6 7 8 9 
not found
10 10 10 10 10 10 
아무것도 없을까??

vector : 동적으로 요소를 할당할 수 있는 동적 배열
컴파일 시점에 사용해야 할 요소들의 개수를 모른다면 vector를 사용해야 한다.
연속된 메모리 공간에 위치한 같은 타입의 요소들의 모음이며, 숫자인덱스를 기반으로 랜덤 접근이 가능하며 중복을 허용합니다.

vector<타입> 변수명;

탐색과 맨 뒤의 요소를 삭제하거나 삽입하는 데 O(1)이 걸리며,
맨 뒤나 맨 앞이 아닌 요소를 삭제하고 삽입하는 데 O(n)의 시간이 걸립니다.

push_back(): vector의 뒤에서부터 요소를 더합니다. emplace_back()도 동일한 기능을 하지만, 시간 차이는 별로 나지 않습니다.
pop_back(): vector의 맨 뒤의 요소를 지웁니다.
erase()

iterator erase (const_iterator position);
iterator erase (const_iterator first, const_iterator last);

erase로 한 요소만을 지운다면 erase(위치)로 쓰이지만, 범위로 지우고 싶은 경우 erase[from,to)를 통해 지웁니다.

find(from, to, value)
vector의 메서드가 아닌 STL 함수입니다. [from, to) 에서 value를 찾습니다.
vector 내의 요소들을 찾고 싶을 때 이를 통해 찾습니다. O(n)의 시간복잡도를 갖습니다.

clear()
vector의 모든 요소를 지웁니다.

fill(from, to, value)
vector 내의 value로 값을 할당하고 싶으면 fill을 써서 채웁니다.
[from, to) 구간에 value를 초기화합니다.

범위 기반 for 루프
C++ 11부터 범위기반 for 루프가 추가되어 사용할 수 있습니다.
순회할 수 있는 컨테이너인 vector, Array, map 등도 사용 가능합니다.

for ( range_declaration : range_expression ) 
    loop_statement

for(<해당 컨테이너에 들어있는 타입> 임시변수명 : 컨테이너)
예시 코드 : vector_2.cpp
*/