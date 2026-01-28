#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    for (const int& value : vec) {
        cout << value << "";
        // value = 100; // 에러 발생. value는 상수값!
    }
    return 0;
}
