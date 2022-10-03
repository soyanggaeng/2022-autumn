int main()
{
    // type deduction (inference)
    int x[5] = {1, 2, 3, 4, 5}; 

    auto a = x; // 컴파일러가 int* a = x; 로 인식

    decltype(x) d; // int d[5]; 로 결정
    // decltype(x) d1 = x; => 초기값이 있다면 error
}