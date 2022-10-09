// const_cast: 객체(변수)의 "상수성을 제거"하는 캐스팅

int main()
{
    const int c = 10;
    int* p1 = static_cast<int*>(&c); // error
    int* p2 = reinterpret_cast<int*>(&c); // error
    int* p3 = const_cast<int*>(&c); // ok
}