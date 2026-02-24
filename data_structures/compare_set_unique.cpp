#include <bits/stdc++.h>
using namespace std;
void A() {
    vector<int> v; 
    int n = 1e5; 
    for(int i = 1; i < n; i++) { 
        v.push_back(i); 
        v.push_back(n - i); 
    } 
    sort(v.begin(), v.end()); 
    v.erase(unique(v.begin(),v.end()),v.end());
}

void B() { 
    vector<int> v; 
    int n = 1e5; 
    for(int i = 1; i < n; i++) { 
        v.push_back(i); 
        v.push_back(n - i); 
    } 
    set<int> st; 
    for(int i : v) { 
        st.insert(i); 
    } 
    vector<int> nv; 
    for(int i : st) {
        nv.push_back(i); 
    } 
}

void test_latency(size_t iteration) { 
    PROFILE_START("A"); 
    A(); 
    PROFILE_STOP("A"); 
    PROFILE_START("B"); 
    B(); 
    PROFILE_STOP("B"); 
} 

int main() { 
    const size_t warmups = 1000; 
    const size_t tests = 100; 
    PROFILE_RUN_ALL(warmups, tests, test_latency(__loop); ); 
    return 0; 
}

/*
unique와 set 중 어떤 것을 써야 할까??
둘 다 사용해도 된다.

예를 들어 vector에다가 담아야 하는 로직이 있다면
만약 set을 사용하는 경우
1. 중복된 배열 vector 생성됨
2. set 사용해서 중복 제거
3. 다시 새로운 vector를 만들어 요소를 집어넣음

이를 통해 새로운 vector와 set 2개의 자료구조가 "더" 만들어지게 되는 것을 알 수 있습니다.
하지만 unique() 와 erase()를 사용한다면 해당 중복된 배열 vector를 기반으로 사용해도 된다는 장점

https://perfbench.com/

해당 URL 벤치마킹 시 set보다는 unique()와 erase() 사용하는 코드가 더 좋은 것을 알 수 있다.

단, 이는 필요한 로직에 따라 달라지니 참고하도록 한다.
*/