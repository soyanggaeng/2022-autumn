#include <iostream>

// NULL을 사용하고 싶다면... 그러나 nullptr을 사용하면 해결됨
#ifdef __cplusplus
    #define NULL 0
#else
    #define NULL (void*)0 // C언어의 NULL
#endif

void foo(int n){std::cout << "int" << std::endl;}
void foo(void* p){std::cout << "void*" << std::endl;}

void goo(char* p){std::cout << "char*" << std::endl;}

int main()
{
    foo(0); // foo(int)
    foo((void*)0); // foo(void*)
    foo(NULL);

    goo(0); // ok
    goo(NULL); // void* => char* 필요. 
        // C 언어 ok, C++ error

    foo(nullptr);
    goo(nullptr);
}