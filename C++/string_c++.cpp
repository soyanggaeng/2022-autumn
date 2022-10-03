#include <iostream>
#include <cstring> // string.h의 C++ 버전
#include <string>  // 정체는 class - std::string을 사용하기 위한 헤더

int main()
{
    std::string s1[] = "abcd";
    std::string s2[5];

    s2=s1; // ok

    if (s2==s1) 
        std::cout << "same" << std::endl;
    else
        std::cout << "not same" << std::endl;

    std::string s3 = s1+s2;
    std::cout << s3 << std::endl; // abcdacd
}