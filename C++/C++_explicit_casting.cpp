int main()
{
    const int c = 10;

    // C언어에서는
    char* p1 = (char*)&c;

    // 위 코드와 동일하게 동작하는 캐스팅 코드를 C++로 작성해 보세요.
    // char* p2 = reinterpret_cast<char*>(&c); // error. const 제거 안 됨
    // char* p2 = const_cast<char*>(&c); // error. int* => char* 안 됨

    char* p2 = reinterpret_cast<char*>(const_cast<int*>(&c));
    char* p3 = const_cast<char*>(reinterpret_cast<const char*>(&c)); // 상수성이 있는 채로 char로 바꾼 후, 상수성을 제거
}