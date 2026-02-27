#include <bits/stdc++.h>
using namespace std;
bool compare(string a, string b) {
    if (a.size() == b.size())
        return a < b;
    return a.size() < b.size();
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a[3] = {"111", "222", "33"};
    sort(a, a + 3, compare);
    for (string b : a){
        cout << b << " ";
    }
    return 0;
}

/*
33 111 222

struct 내의 오퍼레이터 오버로딩 하지 않고 compare() 함수를 만들어서 세번째 매개변수로 넣어 구현할 수 있다.
이 때는 < 오퍼레이터 또는  > 오퍼레이터 두개 모두를 기준으로 설정할 수 있다.

"111" "222" 를 비교한다면 아스키코드 순서 상 "111" 이 "222" 보다 더 작은 숫자로 인식
그러나 "111", "33"을 비교하면
아스키코드 순서상 "33"이 "111"보다 크다고 인식

때문에 항상 숫자로 이루어진 문자열을 비교할 때는 사이즈 확인 로직을 넣는게 중요하다.
*/