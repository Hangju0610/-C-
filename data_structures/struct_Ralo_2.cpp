#include <bits/stdc++.h>
using namespace std;
struct Ralo{
    int a, b;
};

bool compare(Ralo A, Ralo B) {
    if(A.a == B.b)
        return A.b < B.b;
    return A.a < B.a;
}

int main (){
    Ralo a[3] = {{1, 2}, {1, 3}, {0, 4}};
    sort(a, a + 3, compare);
    for(Ralo A : a) {
        cout << A.a << " : " << A.b << "\n";
    }
    return 0;
}

/*
0 : 4
1 : 2
1 : 3

1순위로 Ralo의 a를 오름차순으로, 2순위로 Ralo의 b를 오름차순으로 정렬하는 코드
*/
