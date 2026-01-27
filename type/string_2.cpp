#include <bits/stdc++.h>
using namespace std;
int main() {
    string a = "love is";
    a += " pain!";
    a.pop_back();
    cout << a << " : " << a.size() << "\n";
    cout << char(*a.begin()) << '\n';
    cout << char(*(a.end() - 1)) << '\n';
    // string& insert (size_t pos, const string& str);
    a.insert(0, "test ");
    cout << a << " : " << a.size() << '\n';
    // string& erase(size_t pos, size_t len = npos);
    a.erase(0, 5);
    cout << a << " : " << a.size() << '\n';
    // size_t find (const string& str, size_t pos = 0);
    auto it = a.find("love");
    if (it != string::npos) {
        cout << "포함되어 있다." << '\n';
    }
    cout << it << '\n';
    cout << string::npos << '\n';
    // string substr (size_t pos = 0, size_t len = npos) const;
    cout << a.substr(5, 2) << '\n';
    return 0;
}

/*
출력
love is pain : 12
l
n
test love is pain : 17
love is pain : 12
포함되어 있다.
0
18446744073709551615
is
(b
*/

/*
설명
+= : 문자열을 더할 때 보통 사용.
push_back()라는 메서드가 있지만, 이는 문자 하나씩밖에 더하지 못해 보통 += 사용

begin() : 문자열의 첫번쨰 요소를 가리키는 이터레이터를 반환한다.
해당 이터레이터를 기반으로 *를 통해 해당 위치의 값을 가져올 수 있다.

end() : 문자열의 마지막 요소 그 다음을 가리키는 이터레이터를 반환

size(): 문자열의 사이즈를 반환 O(1)의 시간복잡도

insert(위치, 문자열) : 특정 위치에 문자열을 삽입. O(n)의 시간복잡도

erase(위치, 크기) : 특정 위치에 크기만큼 문자열을 지운다. O(n)의 시간복잡도

pop_back() 문자열 끝을 지운다. O(1)의 시간 복잡도

find(문자열)
특정 문자열을 찾아 위치를 반환합니다. 만약 해당 문자열을 못 찾을 경우 string::npos를 반환한다.

여기서 string::npos는 size_t 타입의 최대값을 의미한다.
size_t 타입의 최대값은 OS에 따라 달라지며, 64비트 운영체제라면 64비트 부호가 없는 최대 정수를 의미.

시간 복잡도는 보통은 O(N)이라고 보면 되지만, 최악의 경우에는 O(N * M)이 된다.
N이 문자열의 길이, M이 찾고자 하는 문자열이라고 했을 때, O(N+M) 이며, 보통의 M은 N보다 짧은 문자열이기 떄문에 O(2N)이 되어 O(N)이 된다.

최악의 경우, 특정 패턴이 문자열 내에서 반복적으로 매치되고 불일치하는 상황이 발생하면
시간 복잡도가 O(N * M) 이 될 수 있다.

substr(위치, 크기)
특정 위치에서 크기만큼의 문자열을 추출한다. O(n)의 시간 복잡도
크기를 넣지 않는다면 위치로부터 문자열 가장 끝자리까지 문자열을 추출한다.
*/