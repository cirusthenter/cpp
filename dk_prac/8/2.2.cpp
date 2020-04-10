#include <iostream>

int main()
{
    int n = 1234;

    std::cout.setf(std::ios::right);
    std::cout.unsetf(std::ios::dec);
    std::cout.setf(std::ios::oct);
    std::cout.width(8);
    std::cout.fill('-');
    std::cout << n << std::endl;

    return 0;
}