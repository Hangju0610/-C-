#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> numbers = {1, 2, 3, 3, 4, 5, 5, 5, 6};
    // 특정 값의 개수를 셈
    int count_five = numbers.count(5);
    cout << "5 요소의 개수 : " << count_five << "\n";
    return 0;
}

/*
5 요소의 개수 : 3

multiset은 자주 쓰이지 않지만 다음과 같이 요소의 빈도수 계산에 사용됩니다.
*/