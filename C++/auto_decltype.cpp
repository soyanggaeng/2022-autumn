int main()
{
    // 1) auto
    double x[5] = {1, 2, 3, 4, 5};
    // 위의 타입이 int, double 등이 되었을 때 아래의 타입도 바꿔줄 필요는 X
    auto n = x[0];

    // 2) decltype
    // 괄호 안의 표현식을 보고 데이터 타입을 결정
    decltype(n) n1; // int n1;
}