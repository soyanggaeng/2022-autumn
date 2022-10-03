// template<typename T>
template<class T> //완벽히 동일
T square(T a)
{
    return a*a;
}

//C++20부터 가능
// auto square(auto a)
// {
//     return a*a;
//     auto n; // error
// }

int main()
{
    square<int>(3);
    square<double>(3.4);
    // 템플릿 인자(타입)를 생략할 수 있음 => type deduction
    square(3);

    // printf("%p\n", &square); // error - template은 주소가 없다.(compile할 때 사용하는 틀)
    printf("%p\n", &square<int>); // ok
}

// 코드 폭발(Code Bloat)
    // :템플릿이 너무 많은 타입에 대해 "인스턴스화(instantiation)" 되어서 코드 메모리가 증가하는 현상