// 원리: 컴파일러가 컴파일 시간에 함수의 이름을 변경하는 것
// 컴파일 된 후의 코드에 있는 함수는 모두 이름이 다르다. "name mangling" 현상
    // => 이로 인해 C/C++ 호환성 문제가 발생할 수 있다.

void f1(int a){}
void f1(double a){} // ok

void f2(int a){}
void f2(int a, int b){} // ok

// 함수 반환 타입만 다른 경우는 오버로딩 안 됨
// void f3(int a){}
// char f3(int a){return 0;} // error

// 만들 수는 있으나 모호할 수 있음
void f4(int a){}
void f4(int a, int b=0){} // default 값이 있음. 

void f5(char a){}
void f5(short a){}

int main()
{
    f1(3);
    f1(3,3);

    f2(1);
    f2(1, 2);

    // 2번째 줄의 경우 compiler가 어디로 갈지 결정 불가. "ambiguous"
    f4(1, 2);
    // f4(1); 

    f5('a'); // ok
    // f5(1); // int는 char, short 모두 가능 => ambiguous
}