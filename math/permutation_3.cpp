#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[] = {1, 2, 3};
    do {
        for(int i : a)
            cout << i << ' ';
        cout << '\n';
    // } while (next_permutation(&a[0], &a[3])); // &a[3]을 통해 배열의 마지막 인덱스 다음을 가리킨다.
    } while (next_permutation(&a[0], &a[0] + 3)); // &a[0] + 3을 통해 배열의 마지막 인덱스 다음을 가리킨다.
    // } while (next_permutation(a, a + 3)); // 배열의 이름은 pointer to decay가 되기 때문에 이름을 주소값으로 활용한 코드

    // 세개 모두 같은 의미
}