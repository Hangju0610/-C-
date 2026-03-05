#include <bits/stdc++.h>
using namespace std;
int main() {
    int a = 1, r = 2, n = 4;
    vector<int> v;
    cout << a * ((int)pow(r, n) - 1) / (r - 1);
    cout << '\n';
    for (int i = 0; i < n; i++) {
        v.push_back(a);
        a *= r;
    }
    for(int i : v)
        cout << i << ' ';
}

/*
등비수열의 합 공식
a(r^n - 1) / (r - 1) a : 초항 r : 공비 n : 더하는 것의 개수
*/