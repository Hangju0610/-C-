#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int b[5];
int main() {
    for (int i = 5; i >= 1; i--) b[i - 1] = i;
    for (int i = 5; i >= 1; i--)
        a.push_back(i);
    
    // 오름차순
    sort(b, b + 5);
    sort(a.begin(), a.end());
    for (int i : b)
        cout << i << ' ';
    cout << '\n';
    for (int i : a)
        cout << i << ' ';
    cout << '\n';

    sort(b, b + 5, less<int>());
    sort(a.begin(), a.end(), less<int>());
    for (int i : b)
        cout << i << ' ';
    cout << '\n';
    for (int i : a)
        cout << i << ' ';
    cout << '\n';

    // 내림차순
    sort(b, b + 5, greater<int>());
    sort(a.begin(), a.end(), greater<int>());
    for (int i : b)
        cout << i << ' ';
    cout << '\n';
    for (int i : a)
        cout << i << ' ';
    cout << '\n';

    return 0;
}

/*
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
5 4 3 2 1 
5 4 3 2 1 

sort(first, last, *커스텀비교함수)

sort() 배열 등 컨테이너 요소를 정렬하는 함수, O(NlogN)의 시간 복잡도를 가지는 함수
2개는 필수로 넣어야 하며, 한개는 선택이며 커스텀 정렬하고 싶을 때 넣는다.

first는 정렬하고 싶은 배열의 첫번째 이터레이터, last는 정렬하고 싶은 배열의 마지막 이터레이터를 넣으면 됩니다.
sort()의 세번째 매개변수, 커스텀비교함수를 넣지 않으면 기본적으로 오름차순이며 이를 커스텀비교함수에 greater<타입>()를 넣어 
내림차순으로 변경할 수 있습니다. 참고로 less<타입>()을 통해 오름차순으로 정렬할 수도 있습니다.


*/