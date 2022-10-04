#include <iostream>
#include <cstdlib>

int main()
{
// C
    // malloc은 함수
    // 반환 타입이 void*이므로 캐스팅 필요
    // 생성자 호출 안 됨
    int* p1 = (int*)malloc(sizeof(int));
    free(p1);

// C++
    // new는 연산자(키워드) - 언어 차원
    // 캐스팅 필요X
    // 생성자 호출됨 (가장 중요)
    int* p2 = new int;
    delete p2;

    int* p3 = new int[10];
    // 반드시 delete를 배열 형태로!!
    delete[] p3;
}