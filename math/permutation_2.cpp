#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "정렬되어 있지 않은 배열 기반\n";
    int a[] = {1, 3, 2};
    do {
        for(int i : a)
            cout << i << ' ';
        cout << '\n';
    } while (next_permutation(a, a + 3));

    cout << "정렬된 배열 기반\n";

    int b[] = {1, 2, 3};
    do {
        for(int i : b)
            cout << i << ' ';
        cout << '\n';
    } while (next_permutation(b, b + 3));

    // nPr 하는 방법
    vector<int> c = {1, 2, 3, 100, 200};
    do
    {
        for (int i = 0; i < 2; i++)
            cout << c[i] << ' ';
        cout << "  ";
        for (int i = 0; i < 5; i++)
            cout << c[i] << ' ';
        cout << '\n';
        reverse(c.begin() + 2, c.end()); // ✨✨✨
        for (int i = 0; i < 5; i++)
            cout << c[i] << ' ';
        cout << '\n';
    } while (next_permutation(c.begin(), c.end()));
}

/*
정렬되어 있지 않은 배열 기반
1 3 2 
2 1 3 
2 3 1 
3 1 2 
3 2 1 
정렬된 배열 기반
1 2 3 
1 3 2 
2 1 3 
2 3 1 
3 1 2 
3 2 1 

정렬되어있지 않은 배열을 사용할 경우, 순열의 모든 경우의 수가 나오지 않는 점을 확인할 수 있다.

참고로 이는 next_permutation() 이라는 함수가 해당 배열의 그 "다음번쨰 순열"을 만들어내는 함수이기 때문에 그렇다.
예를 들어 1 3 2 라는 배열로 시작한다면 순열은 2 1 3 / 2 3 1 / 3 1 2 ... 로 되기 때문에, 그런것들만 뽑아내기 때문이다.

또한 현재 코드는 정적배열 Array를 사용했기 떄문에, vector와 같은 begin(), end()를 사용할 수 없다.
그래서 배열의 첫번쨰 주소인 a와 끝 주소인 a + 3을 사용했다.

while(next_permutation(a, a + 3));
*/