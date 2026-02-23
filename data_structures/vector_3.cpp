#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 2, 3};
    int ret = -1;
    cout << max(ret, (int)a.size()) << "\n"; // 3
    return 0;
}

/*
size()
배열의 크기를 반환하며, size_t (unsigned)의 값을 반환합니다.
이는 size_t는 보통 unsigned int 혹은 unsigned long long으로 정의되며, 음수가 될 수 없습니다.

이 때문에 주의할 점이 있는데, max(-1, v.size())과 같이 음수와 비교를 할 때,
(int)로 명시적 형변환을 해서 max(-1, (int)v.size())로 바꿔주어야 합니다.

왜냐면 max(-1, v.size())에서 size_t와 int를 비교하면 size_t가 unsigned이므로 암시적 형변환이 발생하여
-1이 아주 큰 양수가 되기 떄문입니다.

만약 위 예시와 다르게
int ret = -1;
cout << max(ret, (size_t)3); // 결과: 18446744073709551615

해당 코드를 사용한다면, underflow 발생하게 됩니다.

이 경우는 컴파일러가 에러를 발생시키기 떄문에 이러한 함수를 실행시켰을 때, 충분히 어떤 부분에서 문제가 발생했는지
알 수 있습니다.

꼭 명시적 형변환을 캐스팅 해줘야 합니다.
*/