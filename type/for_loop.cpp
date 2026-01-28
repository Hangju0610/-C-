#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a = {1, 2, 3};
    for (int b : a)
        cout << b << "\n";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << "\n";
    }
    return 0;
}
/*
1
2
3
1
2
3 

C++ 11부터 범위기반 for 루프가 추가되어 이를 사용할 수 있다.
for ( range_declaration : range_expression ) loop_statement
for({타입} {임시변수명} : {타입을 담은 컨테이너})

*/
