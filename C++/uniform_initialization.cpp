struct Point
{
    int x;
    int y;
};

// C++11 이전에는 일반변수, 구조체, 배열, 클래스에 따라 초기화 방법 달랐음

int main()
{
    int n1 = 0;
    Point p1 = {0, 0}; // 구조체 초기화
    int x1[3] = {1, 2, 3};

    // C++11부터는 uniform initialization / 중괄호 초기화라고도 부름 (brace-init)
    int n2 = {0};
    Point p2 = {0, 0};
    int x2[3] = {1, 2, 3};    

    // 직접direct 초기화 (vs. 복사copy 초기화)
    int n3{0};
    Point p3{0, 0};
    int x3[3]{1, 2, 3};   

    int n1 = 3.4; // ok

    int n2{3.4}; // error
    int n3 = {3.4}; // error

    char c{500}; // error
    // => uniform initialization이 더 안전함, prevent narrow
}