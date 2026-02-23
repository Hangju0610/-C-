#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
vector<vector<int>> v2(10, vector<int>(10, 0));
vector<int> v3[10];
int main() {
    for (int i = 0; i < 10; i++) {
        vector<int> temp;
        v.push_back(temp);
    }
    return 0;
}

/*
2차원 배열 생성방법 3가지

v : vector 안의 vector가 들어가 있는 2차원 배열 타입을 선언합니다.
그 이후, v에 temp라는 vector를 push_back 해서 2차원 배열을 만듭니다.

v2: 10 * 10 짜리 크기의 2차원 배열을 바로 만듭니다. 0으로 초기화 진행

v3: 10개짜리 배열을 선언한 것을 볼 수 있습니다. 이는 v와 똑같은 2차원 배열입니다.
*/