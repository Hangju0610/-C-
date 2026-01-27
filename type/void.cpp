#include <bits/stdc++.h>
using namespace std;
int ret = 1;

void a() {
    ret = 2;
    cout << ret << "\n";
    return; // void 함수에서는 return 생략 가능
}

int main(){
    a();
    return 0;
}

/*
void : 리턴하는 값이 없다.
void 함수에서는 return을 생략해도 된다.
*/