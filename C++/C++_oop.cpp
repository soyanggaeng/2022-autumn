// OOP: "데이터와 함수를 묶어서 타입을 설계"

#include <iostream>

struct Rect
{
    int left;
    int top;
    int right;
    int bottom;

    // C++에서는 인자와 함수를 함께 쓸 수 있음
    int getArea()
    {
        return (right - left) * (bottom - top);
    }
    
    void draw()
    {
        std::cout << "Draw Rect" << std::endl;
    }
};

int main()
{
    Rect rc = {1, 1, 10, 10};

// int n = getRectArea(rc);
// drawRect(rc);

    int n = rc.getArea();
    rc.draw();
}