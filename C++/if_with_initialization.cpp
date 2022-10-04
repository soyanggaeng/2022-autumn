int foo(){
    return 0;
}
int main(){
    // C++17부터 가능
    if (int ret = foo(); ret == 0){ // 수명이 끝남
    }

    switch(int n = foo(); n){
        case 1: break;
    }

    //C++20부터는 range-for 가능
    for (int x[3] = {1, 2, 3}; auto n : x){
    }

    // 단, while문은 error
}