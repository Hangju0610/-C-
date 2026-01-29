#include <bits/stdc++.h>
using namespace std;
int a[10];
int b[10][10];
int main() {
    fill(&a[0], &a[10], 100);
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << '\n';

    fill(&b[0][0], &b[9][10], 2);
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << b[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}

/*
출력
100 100 100 100 100 100 100 100 100 100 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 
2 2 2 2 2 2 2 2 2 2 

설명
fill() : 배열을 초기화 할 때 사용되는 함수
fill은 모든 값으로 초기화 할 수 있다.

O(n)의 시간복잡도를 가지며,
fill(시작값 - first, 끝값 -last, 초기화하는값 - val)로 배열에 들어가는 값을 초기화
void fill (ForwardIterator first, ForwardIterator last, const T& val);


*/