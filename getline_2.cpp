#include <bits/stdc++.h>
using namespace std;
int T;
string s;

int main() {
    cin >> T;
    string bufferflush;
    getline(cin, bufferflush);
    for(int i = 0; i < T; i++) { 
        getline(cin, s);
        cout << s << "\n";
    }
    return 0;
}

/*
cin으로 T개의 getline을 받을지를 설정하고, T개 만큼 getline의 입력이 들어오는 상황
이때, 특정 문자열을 기반으로 버퍼플래시를 하고 받아야 한다.
그 이유는 cin으로 입력을 받을 때, 개행문자 직전까지 입력을 받게 되고, 이 때문에 중간에 위치한 버퍼에 \n이 남아있게 된다.
버퍼의 개행문자를 없애주기 위해 getline(cin, bufferflush)를 해주어야 한다. */