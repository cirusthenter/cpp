#include <iostream>

int main()
{
    std::string str = "keio";

    for (char c: str) {
        std::cout << c << std::endl;
    }

    return 0;
}