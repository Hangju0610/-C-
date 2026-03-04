#include <bits/stdc++.h>
using namespace std;
int a[3] = {1, 2, 3};
void go(int a[]) {
    a[2] = 100;
}

void go2(int a[3]) {
    a[2] = 1000;
}

void go3(int *a) {
    a[2] = 10000;
}

int main() { 
    go(a); cout << a[2] << '\n'; 
    go2(a); cout << a[2] << '\n'; 
    go3(a); cout << a[2] << '\n'; 
}

/*
100
1000
10000

Array의 요소 수정하기
크기를 정하지 않은 int a[], 배열의 크기인 a[3], 배열의 포인터인 int *a를 넘겨서 수정할 수 있다.

*/