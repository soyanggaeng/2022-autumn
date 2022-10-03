// 멤버에 디폴트 초기값을 지정할 수 있게 됨 (C++11)
struct Point
{
    int x= 1;
    int y{2};
};

Point foo()
{
    Point p = {1, 2};
    return p;
}

int main()
{
    struct Point pt1; // struct 굳이 안 붙여도 되게 됨.
    Point pt2 = {3, 4};

    // Structure Binding (C++17): 타입은 반드시 "auto"를 사용해야 함
    // int x = pt2.x;
    // int y = pt2.y;
    auto [x, y] = pt2; // 위의 두 줄과 완전히 동일'

    int arr[3] = {1, 2, 3};
    auto [a, b, c] = arr;
    // int a = arr[0];
    // int b = arr[1];
    // int c = arr[2];    

    auto ret = foo(); // Point ret = foo();
    auto[x1, y1] = foo(); // 각 요소를 분리해 받기 편리함
}