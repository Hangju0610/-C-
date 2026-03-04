#include <bits/stdc++.h>
using namespace std;
void printV(vector<int> &v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << '\n';
}

int main() {
    int a[3] = {1, 2, 3};
    vector<int> v;
    for (int i = 0; i < 3; i++)
        v.push_back(a[i]);
    
    do{
        printV(v);
    } while (next_permutation(v.begin(), v.end()));
    cout << "-------------" << '\n';
    v.clear();

    for(int i = 2; i >= 0; i--) v.push_back(a[i]);
    //3, 2, 1부터 내림차순으로 순열을 뽑습니다. 
    do { 
        printV(v); 
    }while(prev_permutation(v.begin(), v.end()));
    return 0;
}

/*
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
-------------
3 2 1
3 1 2
2 3 1
2 1 3
1 3 2
1 2 3

순열 : 순서가 정해진 임의의 집합을 다른 순서로 섞는 연산
순서와 상관o 뽑는다면 순열을 사용하자.

next_permutation : 오름차순의 배열을 기반으로 순열을 만들 수 있다.
prev_permutation : 내림차순의 배열을 기반으로 순열을 만들 수 있다.

사용법 : 들어가는 매개변수가 [first, last) 이렇게 들어간다.
두번째 인자로는 포함되지 않을 값을 집어넣으면 된다.

배열의 종점인 end()를 넣지 않고 다른 방법도 가능하다.

do {
    printV(v)
} while (next_permutation(v.begin(), v.begin() + 2));

*/