// typedef int DWORD;
// typedef void(*PF)(int); 함수 포인터 

// using은 type + template에 대한 별칭까지 줄 수 있음

using DWORD = int;
using PF = void(*)(int); 

int main()
{
    DWORD n; //int n
    PF p; //void(*p)(int)
}