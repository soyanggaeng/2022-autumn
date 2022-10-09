// 메모리의 재해석 - 해석 방식을 변경하는 캐스팅
    // 1) 서로 다른 타입의 주소(참조) 캐스팅
    // 2) 정수 <=> 주소 사이의 캐스팅

#include <iostream>

int main()
{
    int n = 10;
    // char* p1 = static_cast<char*>(&n); // error
    char* p2 = reinterpret_cast<char*>(&n); // ok

    // char& r1 = static_cast<char&>(n); // error
    char& r1 = reinterpret_cast<char&>(n); // ok

    // 정수 <=> 주소
    // int* p3 = static_cast<int*>(1000); // error
    int* p4 = reinterpret_cast<int*>(1000); // ok

    // 용도 외로 쓰면 error
    double d = reinterpret_cast<double>(3); // 원래는 casting도 필요 없는 경우 => error
    
}