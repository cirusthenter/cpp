#include <iostream>

int main()
{
    int i = 1;
    i *= 2 + 4;
    std::cout << i << std::endl;
    i %= 3;
    std::cout << i << std::endl;
}