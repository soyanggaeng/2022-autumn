int add1(int a, int b){
    return a+b;
}

// suffix return type, trailing return type: C++11에서 등장
// 함수의 반환 타입을 함수의 () 뒤쪽에 적는 표기법
    // 반드시 필요한 경우: 복잡한 형태의 함수 템플릿, 람다 표현식
    // ex. std::cout << add<double>(1, 2.1) << std::endl;
    
auto add2(int a, int b) -> int{
    return a+b;
}

int main(){
    int ret1 = add1(1, 2);
    int ret2 = add2(1, 2);
}