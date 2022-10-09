#include <iostream>

void foo(int) {std::cout << "int" << std::endl};
void foo(double) {std::cout << "double" << std::endl};
void foo(bool) {std::cout << "bool" << std::endl};
void foo(char*) {std::cout << "char*" << std::endl};

int main()
{
    foo(0); // foo(int)
    foo(0.0); // foo(double)
    foo(false); // foo(bool)
    foo(nullptr); // foo(char*) => nullptr의 타입은?
    // nullptr의 타입: std::nullptr_t

    std::nullptr_t null = nullptr;

    int* p1 = null; // ok
    char* p2 = null; // ok
}