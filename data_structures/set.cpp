#include <bits/stdc++.h>
using namespace std;
int main() {
    set<pair<string, int>> st;
    st.insert({"test", 1});
    st.insert({"test", 1});
    st.insert({"test", 1});
    st.insert({"test", 1});
    cout << st.size() << '\n';
    set<int> st2;
    st2.insert(2);
    st2.insert(1);
    st2.insert(2);
    for(auto it : st2) {
        cout << it << '\n';
    }
    return 0;
}

/*
1
1
2

고유한 요소만을 저장하는 컨테이너, 중복을 허용하지 않는다.
map 처럼 {key, value}로 집어넣지 않아도 되며, 다음 코드처럼 pair나 int 형을 집어넣어서 만들 수 있습니다.
중복된 값은 제거 되며 map과 같이 자동 정렬됩니다.

메서드는 map과 같습니다.


*/