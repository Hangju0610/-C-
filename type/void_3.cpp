#include <bits/stdc++.h>
using namespace std;
double a();
int main(){
    double ret = a();
    cout << ret << "\n";
    return 0;
}

double a(){
    return 1.2333;
}

/*
함수를 선언할 때는 항상 호출되는 위쪽 부분에 선언을 해야 한다.
이번 코드처럼, 타입과 인자만 선언을 해 놓고 아래쪽에 함수를 정의하는 식으로 선언부와 정의부를 나눠서 함수를 설정할 수 있다.
*/