#include <bits/stdc++.h>
using namespace std;
string s;

// 기본적으로 개행 문자 '\n'를 줄의 끝으로 인식하고 그 개행 문자직전까지 입력 받지만, 
// 다른 종결 문자를 사용하고 싶은 경우, 세번째 인자로 전달하면 된다.
int main() {
    getline(cin, s, '.'); 
    cout << s << '\n';
    return 0;
}

/*
입력
엄준식 화이팅. ㅋㅋ

출력
엄준식 화이팅
*/