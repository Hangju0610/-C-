#include <bits/stdc++.h>
using namespace std;
int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5};

void print(vector<int> b) {
    for (int i : b)
        cout << i << " ";
    cout << '\n';
}

void combi(int start, vector<int> &b) {
    if (b.size() == k) {
        print(b);
        return;
    }

    for (int i = start + 1; i < n; i++) {
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
    return;
}

int main() {
    vector<int> b;
    combi(-1, b);
    return 0;
}

/*

012
013
014
023
024
034
123
124
134
234

재귀함수를 이용하는 방법
인덱스를 출력하는 함수이며, 이 방법은 외워두는 것이 좋다.
*/