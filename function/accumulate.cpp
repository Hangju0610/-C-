#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << '\n'; // 55
}

/*
배열의 합을 쉽고 빠르게 구해주는 함수 accumulate
*/