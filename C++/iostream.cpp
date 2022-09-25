# include <iostream>
# include <iomanip>

int main()
{
    int n = 10;

    std::cout << n << std::endl; //endl = enter

    // in c, %x
    std::cout << std::hex << n << std::endl;

    // in c, %d
    std::cout << std::dec << n << std::endl;

    // in c, %10d // set 10 words
    std::cout << std::setw(10) << n << std::endl;
    std::cout << std::setw(10) << std::setfill('#') << n << std::endl;
        // result: ########10
    std::cout << std::setw(10) << std::setfill('#') << std::left << n << std:endl;
        // result: 10########
    
    // see io manipulator in cppreference.com 
}