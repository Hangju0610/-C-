#include <bits/stdc++.h>
using namespace std;
int main() {
    double p = 1.5;
    int a = (int)p * 100; // 100
    int b = (int)100 * p; // 150 why?? 100 int를 int로 캐스팅 해도, p는 double이잖아.
    int c = 100 * (int)p; // 100
    cout << a << " : " << b << " : " << c << "\n";
    return 0;
}