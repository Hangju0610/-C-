#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string& input, string delimiter) {
    vector<string> result;
    auto start = 0; // int 로 추론
    auto end = input.find(delimiter); // size_t로 추론
    while (end != string::npos) {
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}

int main() {
    string str = "apple,banana,orange,grape";
    vector<string> fruits = split(str, ",");
    for (const string& fruit: fruits) {
        cout << fruit << endl;
    }

    return 0;
}

/*
출력
apple
banana
orange
grape

해설
C++의 STL 에서는 split() 함수를 지원하지 않는다. 따라서 만들어야 한다.
보통 위와 같이 구현한다.

auto - 타입을 자동으로 추론하는 키워드. 컴파일러가 초기화 값을 보고 타입을 결정한다.
const - 상수를 의미하며, 값을 변경할 수 없게 만든다. (javascript와 동일)
& 참조 - 변수의 별칭을 만들고, 복사본이 아닌 원본을 직접 참조한다.
const string& input  // string을 복사하지 않고 참조만 전달 (효율적)
const string& fruit  // 반복문에서 복사 없이 참조 사용

// 비효율: string을 매번 복사
for (const string fruit: fruits)  

// 효율적: 참조만 사용
for (const string& fruit: fruits)

endl - 출력 스트림에서 줄바꿈(\n)을 수행하고 버퍼를 비운다.
성능이 중요한 경우 "\n"을 사용하는 것이 더 빠르다.

*/

