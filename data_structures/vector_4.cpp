#include <bits/stdc++.h>
using namespace std;

int main() {
    // 예시 1: 문자열 길이가 1인 경우
    string s = "a";
    cout << "문자열: \"" << s << "\"" << "\n";
    cout << "s.size() = " << s.size() << "\n";

    // 예시 2: 무한 루프O
    cout << "for 루프 시작 s.size()-2를 조건으로 사용:" << endl;
    for (int i = 0; i < s.size() - 2; i++) {
        cout << "루프 반복: " << i << "\n";
    }

    // 예시 3: 무한 루프 X
    // cout << "for 루프 시작 (int)s.size()-2를 조건으로 사용:" << endl;
    // for (int i = 0; i < (int)s.size() - 2; i++) {
    //     cout << "루프 반복: " << i << "\n";
    // }
    return 0;
}

/*
즉, size()를 기반으로 특정 정수를 뺄 때는 반드시 int 타입으로 변환해야 한다.
*/