#include <iostream>

int main()
{
    std::cout << "Hello, \0 world" << std::endl;
    // Hello, 

    std::string str{"Hello, \0 world"};
    std::cout << str << std::endl;
    // Hello,

    std::string str2{"Hello, \0 world", 14};
    std::cout << str2 << std::endl;
    // Hello,  world

    return 0;
}