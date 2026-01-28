#include <bits/stdc++.h>
using namespace std;
int main(){
    string a = "It's hard to have s sore leg";
    reverse(a.begin(), a.end());
    cout << a << "\n";
    reverse(a.begin(), a.end());
    cout << a << '\n';
    reverse(a.begin() + 3, a.end());
    cout << a << '\n';

    return 0;
}

/*
string은 reverse()라는 메서드를 지원하지 않는다.
문자열을 거꾸로 뒤집고 싶다면, STL에서 지원하는 함수인 reverse()를 사용하면 된다.
reverse() 함수는 void 타입으로 아무것도 반환하지 않고, 원본 문자열을 변형한다.

void reverse (BidirectionalIterator first, BidirectionalIterator last);

출력
gel eros s evah ot drah s'tI
It's hard to have s sore leg
It'gel eros s evah ot drah s

*/