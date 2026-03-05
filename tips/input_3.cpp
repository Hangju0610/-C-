#include <bits/stdc++.h>
using namespace std;
char a[10][10];
int main() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            scanf(" %c", &a[i][j]); // 문자 char 타입은 %c 앞에 띄어쓰기를 넣어주어야 한다.
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j];
        }
        cout << '\n';
    }
    return 0;
}

/*
문자열을 받는 경우
문자 char 타입은 %c 앞에 띄어쓰기를 넣어주어야 한다.

LLMM
MMLL
LLMM
MMLL
*/