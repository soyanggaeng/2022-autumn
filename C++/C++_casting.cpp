#include <cstdlib>

int main()
{
    int* p1 = static_cast<int*>(malloc(100)); // void pointer를 integer pointer로 바꾼다
        // 반드시 필요한 경우의 캐스팅만 허용 => error X
        // void* => 다른 타입 포인터로 바꾸는 것은 허용
    free(p1);

    int n = 10;
    double* p2 = static_cast<double*>(&n); 
        // 4byte memory 주소를 8byte memory로 바꾸려고 하면 위험, 캐스팅 허용X => error

    const int c = 10;
    int* p3 = static_cast<int*>(&c);
        // 상수를 바꾸려고 하는 것은 위험 => error

}