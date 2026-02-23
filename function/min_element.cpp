#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a = *min_element(v.begin(), v.end());
    auto b = min_element(v.begin(), v.end());
    cout << a << '\n'; // 1
    cout << (int)(b - v.begin()) << '\n'; // 0

    return 0;
}

/*
1
0

배열 중 가장 작은 요소를 추출하는 함수
max_element와 동일하게 동작

메모리 주소끼리의 뺄셈

auto it = lower_bound(a.begin(), a.end(), 3);
cout << it - a.begin() << "\n"; // 인덱스 차이를 출력

이 코드는 it와 a.begin() 사이의 인덱스 차이를 출력한다.
그 이유는 C++에서 포인터나 이터레이터의 뺄셈 연산은 메모리 주소의 차이를 바이트 단위로 반환하는 것이 아닌,
요소의 인덱스 차이를 반환하기 때문이다.

포인터 산술의 특징
두 포인터의 차이는 요소 간의 거리를 요소의 크기(이 경우 int의 크기인 4바이트)로 나누어 반환한다.

&*의 의미
& 연산자 : 변수의 주소를 구하는데 사용됩니다.
* 연산자: 포인터가 가리키는 값(역참조)을 얻을 때 사용됩니다.

*/