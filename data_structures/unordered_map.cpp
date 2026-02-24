#include <bits/stdc++.h>
using namespace std;
unordered_map<string, int> umap;
int main() {
    umap["bcd"] = 1;
    umap["aaa"] = 1;
    umap["abc"] = 1;
    for(auto it : umap) {
        cout << it.first << " : " << it.second << '\n';
    }
    return 0;
}
/*
abc : 1
aaa : 1
bcd : 1

정렬이 되지 않은 map이며, 메서드는 map과 동일하다.
map : 정렬이 됨 / 레드블랙트리 기반 / 탐색, 삽입, 삭제에 O(logN)이 걸림
unordered_map : 정렬이 안됨 / 해시테이블 기반 / 탐색, 삽입, 삭제에 평균적으로 O(1), 가장 최악의 경우 O(N)
*/