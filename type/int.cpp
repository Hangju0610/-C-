#include <bits/stdc++.h>
using namespace std;
// const int INF = 987654321;
// const int INF2 = 1e9;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a = 3;
    int b = 2;

    cout << a / b << '\n';
    double c = 3;
    double d = 2;

    cout << c / d << '\n';
    return 0;
}

/*
int : 4바이트짜리 정수를 사용할 때 사용됩니다.
-2,147,483,648 ~ 2,147,483,647

추가적으로, 문제를 풀 때는 이상한 문제가 아니라면 int의 최대값으로 20억까지가 아닌 
987654321 또는 1e9를 씁니다.
// const int INF = 987654321;
// const int INF2 = 1e9;

why ? INF를 기반으로 INF + INF 연산이 일어날 수도 있고, 이를 통해 int의 최대값을 넘어가는 오버플로를 방지할 수 있다는 
장점이 있기 떄문입니다.

int로 선언한 변수 끼리 연산을 하게 되었을 떄, 실수가 나온다면 소숫점 아래에 있는 수는 모두 버림이 됩니다.
이 현상은 int 정수형 타입끼리만 그렇지, double 타입은 버림 없이 1.5가 나오는 것을 알 수 있습니다.

*/