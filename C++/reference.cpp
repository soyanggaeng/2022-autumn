// refence: 이미 존재하는 변수에 추가적인 별칭alias을 부여하는 문법
// & 연산자: 변수의 주소를 구할 땐 &n (이미 선언된 변수)
// & 연산자 - refence 변수: int& r = n;

void inc1(int n){++n;} // call by value
void inc2(int* p){++(*p);} // call by refence
void inc3(int& r){++r;} // C++에서의 call by reference
// 단, 포인터보다 "간결하고 안전하게 코드"를 작성할 수 있다
    // int& r; 불가능! 널 참조가 없다. => 더 안전!
    // scanf는 call by pointer, std::cin은 call by reference라는 점

int main()
{
    int a = 10, b = 10, c = 10;

    inc1(a);
    inc2(&b);
    inc3(c); // c? or &c? => c라는 점 잘 기억하기
    // 값이 바뀔지 안 바뀔지 예측하기 힘들 것 같다는 느낌이 들 수도.(C언어에 익숙한 경우)

    std::cout << a << std::endl; // 10
    std::cout << b << std::endl; // 11
    std::cout << c << std::endl; // 11
}