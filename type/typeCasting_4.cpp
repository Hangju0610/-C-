#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "123456";
    // 각 문자를 숫자로 변환하여 저장할 벡터를 선언
    vector<int> digits;
    // 문자열의 각 문자를 순회하며 숫자로 변환합니다.
    for (int i = 0; i < s.length(); i++) {
        // s[i]는 문자 타입이므로 '0'을 빼서 정수 값으로 변환합니다.
        int digit = s[i] - '0';
        // 변환한 숫자를 벡터에 추가합니다.
        digits.push_back(digit);
    }

    cout << "문자열을 개별 숫자로 변환한 결과: \n";
    for (int i = 0; i < digits.size(); i++) {
        cout << digits[i] << " ";
    }

    return 0;
}

/*
문자열을 개별 숫자로 변환한 결과: 
1 2 3 4 5 6

설명
s[i]는 문자 -> 숫자화 시켜주기 위해 '0'을 뺍니다.
s[i]는 char, 즉 문자 타입이므로, '0'을 뺴주면 해당 문자의 아스키 코드을 빼서, 정수 값을 얻을 수 있습니다.
예를 들어, '3' - '0'은 51 - 48 = 3이 됩니다.
*/