// call by value: 변수를 수정하지 않겠다는 약속, 그러나 복사본에 대한 오버헤드가 있다.

struct Rect
{
    int left;
    int top;
    int right;
    int bottom;
};

void foo(const Rect& r) // 수정X, 오버헤드도 만들지 않는다는 약속
// 그러나 전혀 메모리를 사용하지 않는 건 아니다. 때에 따라 효율성이 다를 수 있음.
// primitive type(int 같은 것)의 경우 더 많은 컴파일러 최적화가 지원됨
// 사실상 user define type일 때 복사 생성자 호출의 오버헤드를 줄이기 위해 const를 사용!
{
    // 이 안에서 어떤 일이 벌어지든 r이 바뀌면 안 됨
}

int main(){
    Rect rc = {1, 1, 5, 5};
    foo(rc);
}