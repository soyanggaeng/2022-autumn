#include <iostream>

int main(){
    int n1 = 30, n2 = 20;

    // C++20부터, spaceship 연산자라고도 부름
    auto ret = (n1<=>n2); // 0이 나오면 같다, 0보다 크면 n1이 크다, 0보다 작으면 n1이 작다
    // 연산자의 반환값은 std::cout으로 출력 불가능, 어떤 타입을 비교하는지에 따라 변환 타입이 달라짐

    if (ret == 0)
        std::cout << "n1==n2" << std::endl;
    else if (ret > 0)
        std::cout << "n1>n2" << std::endl;
    else if (ret<0)
        std::cout << "n1<n2" << std::endl;
    
    std::cout << typeid(ret).name() << std::endl; // strong_ordering이라는 구조체
    // n1, n2가 double이면 partial ordering이 됨

}