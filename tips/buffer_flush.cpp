#include <bits/stdc++.h>
using namespace std;

int main() {
    // 버퍼플러시 전
    for (int i = 1; i <= 5; ++i) {
        cout << i << '\n';
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;

    // 버퍼 플러쉬 후
    for (int i = 1; i <= 5; ++i) {
        cout << i << '\n' << flush;
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;

    // 버퍼 플러쉬 후 : 위와 동일한 코드
    for (int i = 1; i <= 5; ++i) {
        cout << i << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;
    return 0;
}

/*
"\n";의 경우 한개씩 1, 2, 3, 4, 5가 나와야 하는데 “어떤 경우에는” 한번에 출력이 될 수도 있습니다.
플러시는 이를 무조건 순차적으로 출력되게 해주는 것이죠. 왜냐면 콘솔창으로 바로 “출력을 플러시”해주는 역할을 하기 때문입니다.

버퍼플러시 : 임시 저장 영역에서 컴퓨터의 영구 메모리로 컴퓨터 데이터를 전송하는 것을 의미한다.
즉, word의 임시파일을 저장한다로 생각
*/