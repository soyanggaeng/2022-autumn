int gcd(int a, int b){
    return b != 0 ? gcd(b, a%b):a; // 최대공약수
}

// double gcd(double a, double b); // 구현이 없다. compile 만 할 경우 문제X
double gcd(double a, double b) = delete; // c++, 함수 삭제
// 이를 통해 정수가 아닌 수가 들어오면 최대공약수 구하지 않도록
// 컴파일러에게 자동 생성하는 함수를 만들지 못하게 하고 싶을 때 주로 사용

int main()
{
    gcd(10, 4);
    gcd(3.3, 4.4); // 맨 위의 함수만 있다면 double이 int로 변형되어 작동O
}