#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
string a[] = {"박형주", "주홍철", "박효신"};
int main() {
    for (int i = 0; i < 3; i++) {
        mp.insert({a[i], i + 1});
        mp[a[i]] = i + 1;
    }

    // mp에 해당 키가 없다면 0으로 초기화 되어 할당됨.(int의 경우)
    // 만약 mp에 해당 키가 없는지 확인하고 싶고
    // 초기값이 0으로 할당되지 않아야 하는 상황이라면
    // find를 사용해야 함.
    cout << mp["kundol"] << "\n";
    // 대괄호로 수정 가능.
    mp["kundol"] = 4;
    cout << mp.size() << "\n";

    mp.erase("kundol");
    auto it = mp.find("kundol");
    if (it == mp.end()) {
        cout << "못찾았다~\n";
    }

    mp["kundol"] = 100;
    it = mp.find("kundol");

    if (it != mp.end()) {
        cout << (*it).first << " : " << (*it).second << "\n";
    }

    for(auto it : mp) {
        cout << (it).first << " : " << (it).second << "\n";
    }

    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << (*it).first << " : " << (*it).second << "\n";
    }

    mp.clear();

    return 0;
}

/*
0
4
못찾았다~
kundol : 100
kundol : 100
박형주 : 1
박효신 : 3
주홍철 : 2
kundol : 100
박형주 : 1
박효신 : 3
주홍철 : 2

map
고유한 key를 기반으로 key-value 쌍으로 이루어져 있는 정렬된 연관 컨테이너입니다.
C++에서는 레드 - 블랙트리로 구현됩니다. 따라서, 삽입 삭제 수정 탐색이 O(logN)의 시간복잡도를 가집니다.

고유한 키를 갖기 때문에 하나의 키에 중복된 값이 들어갈 수 없으며, 자동으로 오름차순으로 정렬되기때문에
아스키코드순으로 정렬된 값들을 기반으로 탐색하게 됩니다.
또는 대괄호 연산자[]로 해당키를 직접 참조할 수 있습니다.

insert({key, value})
map에다 {key, value}를 집어 넣습니다.
[key] = value
대괄호를 통해 key에 해당하는 value를 할당합니다.

[key]
대괄호[]를 통해 key를 기반으로 map에 있는 요소를 참조합니다.

size()
map에 있는 요소들의 개수를 반환합니다.

erase(key)
해당 키에 해당하는 요소를 지웁니다

find(key)
map에서 해당 key를 가진 요소를 찾아 해당 이터레이터를 반환합니다.
만약 못찾을 경우 mp.end() 해당 map의 end() 이터레이터를 반환합니다.

for(auto it: mp)
범위기반 for 루프로 map에 있는 요소들을 순회
map을 순회할 때는 key는 first, value는 second로 참조 가능

for(auto it = mp.begin(); it != mp.end(); it++)
map에 있는 요소들을 이터레이터로 순회할 수 있습니다.

mp.clear();
map에 있는 요소들을 다 제거합니다.


*/