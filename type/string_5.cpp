#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "123";
    s[0]++;
    cout << s << "\n"; // 223
    return 0;
}

/*
왜 223이 되었을까?? 이는 아스키코드 떄문이다.
아스키코드 49에서 1을 더한 값인 50이 가리키는 값이 2이기 때문에 123 -> 223 으로 되는 것이다.
즉, 문자열에서 ++ 하는 연산은 "아스키코드" 기반으로 수행된다.
*/

