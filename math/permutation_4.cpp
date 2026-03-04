#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[] = {1, 2, 3};
    bool flag = 1;
    do {
        flag = next_permutation(a, a + 3);
        cout << "flag " << flag << "\n";
        for(int i : a)
            cout << i << " ";
        cout << "\n";
    } while (flag);
    return 0;
}

/*
flag 1
1 3 2 
flag 1
2 1 3 
flag 1
2 3 1 
flag 1
3 1 2 
flag 1
3 2 1 
flag 0
1 2 3 

새로운 순열이 이전 순열보다 사전순으로 큰 경우 true를 반환한다.
그러다가 마지막 순열에 도달하고 범위가 첫 번쨰 순열로 재설정 된 경우 false를 반환하는 함수이다.
*/