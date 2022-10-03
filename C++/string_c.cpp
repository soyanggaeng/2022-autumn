#include <iostream>
#include <cstring>

// C언어에서는 == 등의 연산자가 아닌 문자열 전용 함수를 사용해야 함
int main()
{
    char s1[] = "abcd";
    char s2[5];

    // s2=s1; // error
    strcpy_s(s2, s1);

    //if (s2==s1) 불가능
    if (strcmp(s2, s1) == 0)   
        std::cout << "same" << std::endl;
    else
        std::cout << "not same" << std::endl;
}