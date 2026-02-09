#include <bits/stdc++.h>
using namespace std;
int b[10][10];
int main() {
    int *ptr = &b[0][0];
    int size = 10 * 10;
    for (int i = 0; i < size; ++i) {
        *(ptr + i) = 1; // 배열 b를 1로 초기화
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

/*
2차원 배열에서 특정 요소에 접근하려면 b[row][col] 형태를 사용하지만, 포인터를 이용하면 *(ptr + num) 형태로 접근할 수 있다.
즉, &b[0][0] + 10 * 10 이란 100번째 요소를 나타낸다.
배열에서 허용되는 인덱서는 0 ~ 99 이기 때문에, 100번째란 마지막 주소 그 다음의 메모리 주소를 가리킨다.
*/