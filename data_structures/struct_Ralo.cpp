#include <bits/stdc++.h>
using namespace std;
struct Ralo {
    int a, b;
    double c, d, e;
};
void print(Ralo ralo) {
    cout << ralo.a << " " << ralo.b << " " << ralo.c << " " << ralo.d << " " << ralo.e << " " << "\n";
}

int main() {
    Ralo ralo = {1, 1, 1, 1, 1};
    print(ralo);
    vector<Ralo> ret;
    ret.push_back({1, 2, 3, 4, 5});
    ret.push_back({1, 2, 3, 4, 6});
    ret.push_back({});
    ret.push_back({1, 3});
    for(Ralo ralo : ret) {
        print(ralo);
    }
    return 0;
}

/*
1 1 1 1 1 
1 2 3 4 5 
1 2 3 4 6 
0 0 0 0 0 
1 3 0 0 0 

struct : 구조체라고 불리며, C++에서 제공하는 자료구조가 아닌 개발자의 커스텀한 자료구조를 의미한다.
커스텀하게 정렬을 추가하고 싶거나 문제에서 여러개의 변수가 들어가야한다면 struct을 사요해야 한다.

*/