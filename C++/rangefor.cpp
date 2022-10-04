#include <iostream>
#include <ranges> // C++20, std::views

bool is_odd_number(int n){
    return n % 2 == 1;
}

int main(){
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // for (int i = 0; i < 10; i++)
    // for (int i = 0; i < sizeof(x) / sizeof(x[0]) ; i++) // C언어에서 사용
    for (int i = 0; std::size(x) ; i++){ // C++17부터 지원
        std::cout << x[i] << ", ";
    }
    std::cout << std::endl;

// range-for : C++11부터 지원 / python의 in 같음
    // for (int e : x)
    // for (auto e : x) // 이렇게 사용하는 게 더 바람직

// C++20부터
    // for (auto e : std::views::reverse(x)) // 거꾸로 출력
    // for (auto e : std::views::take(x, 3)) // 세 개만 출력: 1, 2, 3
    // for (auto e : std::views::reverse(std::views::take(x, 3))) // 중첩 가능: 3, 2, 1 나옴
    // for (auto e : std::views::drop(x, 3)) // 4부터
    // for (auto e: std::views::filter(x, is_odd_number))
    for (auto e: std::views::filter(x, [](int n){return n%2 == 1;}))
    {
        std::cout << e << ", ";
    }
}