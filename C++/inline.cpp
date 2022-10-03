int Add1(int a, int b)
{
    return a + b;
}

// 함수 호출 코드를 "함수의 기계어 코드로 치환"해달라. => 속도 빨라짐
inline int Add2(int a, int b)
{
    return a + b;
}

int main()
{
    int ret1 = Add1(1, 2);
    int ret2 = Add2(1, 2);

    // 원래는 주소가 없어도 됐는데 이렇게 할 경우 기계어 코드 레벨에서 생긴다.
    int(*f)(int, int) = &Add2;
}