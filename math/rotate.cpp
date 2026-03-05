#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    rotate(v.begin(), v.begin() + 1, v.end());
    for (int i : v)
        cout << i << ' ';
    return 0;
}

/*
2 3 4 5 6 1

rotate()
회전할 구간인 [first, last)를 집어놓고 몇칸 정도 회전할 지 집어넣으면 된다.
ForwardIterator rotate (ForwardIterator first, ForwardIterator middle, ForwardIterator last);
*/