#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "aavv";
    int num = stoi(s);
    cout << num << '\n';
    return 0;
}

/*
출력
1234

다만 문자열, string으로 입력을 받아 입력 받은 글자가 문자열인지 숫자인지 확인해야 하는 경우,
atoi()를 써야 합니다.
stoi()를 하게 되었을 떄 문자열이라면 다음과 같은 에러가 발생합니다.

libc++abi: terminating due to uncaught exception of type std::invalid_argument: stoi: no conversion
[1]    23263 abort      ./test.out
*/