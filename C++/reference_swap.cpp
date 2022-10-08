#include <iostream>
#include <algorithm> // 이 안에 사실 이미 swap 함수가 있다.
// std::swap(x, y);

namespace utils
{
    template<class T>
    inline void swap(T& r1, T& r2)
    {
        T temp = r1;
        r1 = r2;
        r2 = temp;
    }
}

int main()
{
    int x = 10, y = 20;
    utils::swap(x, y);
    std::cout << x << std::endl; // 20
    std::cout << y << std::endl; // 10
}