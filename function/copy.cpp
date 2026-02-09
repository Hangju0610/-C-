#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v{1, 2, 3};
    vector<int> ret(3);
    copy(v.begin(), v.end(), ret.begin());
    cout << ret[1] << "\n";
    ret[1] = 100;
    cout << ret[1] << "\n";
    cout << v[1] << "\n";
    return 0;
}

/*
2
100
2

copy (InputIterator first, InputIterator last, OutputIterator result)

memcpy()와 똑같은 동작을 하는 함수이며, vector와 Array 모두 쓰일 수 있다.

만약 vector v를 ret에다가 옮기고 싶다면 다음과 같이 하면 된다
copy(v.begin(), v.end(), ret.begin());
v : 복사 당하는 vector / ret : 복사하는 vector

이때, 중요한 점은 복사하는 vector와 복사 당하는 vector의 크기를 맞춰주는 것이 중요하다.
*/