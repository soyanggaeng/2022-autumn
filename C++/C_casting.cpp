#include <cstdlib>

int main()
{
    int* p1 = (int*)malloc(sizeof(int)*10); // C방식 캐스팅: 논리적으로 위험한 캐스팅 코드도 대부분 허용
    free(p1);

    int n=10;
    // double* p2=&n; // error
    double* p2 = (double*)&n; // ok, but 실제 의도일까? - 위험한 캐스팅
    *p2 = 3.4;

    // 상수 변수 주소를 비 상수를 가리키는 포인터로 캐스팅
    const int c = 10;
    // const int c = n;
    // int* p3 = &c; // error
    int* p3 = (int*)&c; // 대부분 성공하는 경우가 많다. 
    // const를 만들어놓고 값을 바꿀 수 있다?
    *p3 = 20;
    std::cout << c << std::endl;
    std::cout << *p3 << std::endl;
}