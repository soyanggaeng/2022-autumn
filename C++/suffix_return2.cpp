# include <iostream>

template<class T1, class T2>
// decltype(a+b) add(T1 a, T2 b){ // 변수 선언 전에 a+b를 사용 => error
auto add(T1 a, T2 b) -> decltype(a+b){ // 문제 해결!(C++11)
// auto add(T1 a, T2 b){ // C++14부터 지원
    return a+b;
}

int main(){
    std::cout << add(1, 2.1) << std::endl;
}