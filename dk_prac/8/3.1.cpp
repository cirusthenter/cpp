#include <iostream>

int main()
{
    char str[256];
    std::cout << "> ";
    std::cin.getline(str, 256);
    while(str[0]) {
        std::cout << str << std::endl;
        std::cout << "> ";
        std::cin.getline(str, 256);
    }
}