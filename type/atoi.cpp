#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "1";
    string s2 = "amumu";
    cout << atoi(s.c_str()) << '\n';
    cout << atoi(s2.c_str()) << '\n';
    return 0;
}

/*
출력
1
0

atoi는 표준 라이브러리 함수로, "ASCII to integer"의 약자이며, const char* 타입의 C 스타일 문자열을 int로 변환합니다.
atoi(s.c_str())는 C++에서 문자열 s를 정수 int로 변환하는 방법 중 하나입니다.
s.c_str() : string s를 const char*로 바꿔줍니다.


*/