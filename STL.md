## C++ 에서 STL이란
- STL : Standard Template Library, 즉 자료구조, 함수 등을 제공하는 라이브러리를 뜻한다.
- 알고리즘, 컨테이너, 이터레이터, 펑터 4가지를 제공

### 알고리즘
- 정렬, 탐색 등에 관한 함수로 이루어져있다.

### 컨테이너
- C++ STL의 컨테이너는 C++ 에서 제공하는 자료구조를 의미한다.
- 시퀸스 컨테이너(sequence container) : 데이터를 단순히 저장해놓는 자료구조, array, vector, deque, forward_list, list 존재
- 연관 컨테이너(associative container) : 자료가 저장됨에 따라 자동정렬되는 자료구조, 중복키가 가능한 것은 이름에 multi가 붙는다. set, map, multiset, multimap 존재
- 정렬되지 않은 연관 컨테이너(unordered associative container) : 자료가 저장됨에 따라 자동 정렬되지 않는 자료구조. unordered_set, unordered_map, unordered_multiset, unordered_multlmap
- 컨테이너 어뎁터(container adapter) : 시퀸스 컨테이너를 이용해 만든 자료구조를 뜻하며, stack, queue는 deque로 만들어져 있으며, priority_queue는 vertor를 이용해 heap 자료 구조를 만든다.

### 이터레이터
- 추후 학습

### 펑터
- 펑터란 함수 호출 연산자를 오버로드하는 클래스의 인스턴스를 말합니다.