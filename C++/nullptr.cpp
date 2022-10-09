int main()
{
    int n1 = 0;
    int* p1 = 0; // pointer 초기화할 때 0 사용. 사실상 별로 좋진 않음

    int* p2 = 10; // error
    int* p3 = n1; // error : 0을 가진 정수형 "변수"도 포인터로 암시적 변환될 수 없다.

    // nullptr: 모든 종류의 포인터 변수를 초기화하는 데 사용 가능
    int* p4 = nullptr;
    void(*p5)() = nullptr;

    int n2 = nullptr; // error => 정수(실수) 초기화에 사용될 수 없다.
}