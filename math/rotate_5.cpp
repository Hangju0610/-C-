#include <bits/stdc++.h>
using namespace std;
const int n = 3;
const int m = 4;

void rotate_left_90(vector<vector<int>> &key) {
    int n = key.size();
    int m = key[0].size();

    vector<vector<int>> temp(m, vector<int>(n, 0));

    for (int i = 0; i < m; i ++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = key[j][m - i - 1];
        }
    }

    key = temp;
    return;
}

void rotate_right_90(vector<vector<int>> &key) {
    int n = key.size();
    int m = key[0].size();

    vector<vector<int>> temp(m, vector<int>(n, 0));

    for (int i = 0; i < m; i ++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = key[n - j - 1][i];
        }
    }

    key = temp;
    return;
}

int main() {
    vector<vector<int>> a = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };
    rotate_right_90(a);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}

/*
C++에서 std::vector의 대입 연산자는 깊은 복사(deep copy)를 수행합니다. 
이는 기존의 벡터 내부 메모리를 모두 해제한 후, 오른쪽 벡터의 모든 요소를 새로운 메모리 공간에 복사하기 때문에,
key의 크기, 즉 행과 열의 수는 temp의 크기에 맞춰 자동으로 변경됩니다.
*/
