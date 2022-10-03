// 1) 뒤에서부터 차례대로 default parameter 지정
void f1(int a=0, int b=0, int c=0){} // ok
void f2(int a, int b=0, int c=0){} // ok
// void f3(int a=0, int b, int c=0){} // error
// void f4(int a=0, int b=0, int c){} // error

// 2) 함수를 선언과 구현으로 분리할 때는 함수 선언부에만 디폴트 값 표기
void foo(int a, int b=0, int c=0); // 선언

int main()
{
    foo(1);
}

// void foo(int a, int b, int c)
void foo(int a, int b /*=0*/, int c/*=0*/)
{
} // 구현