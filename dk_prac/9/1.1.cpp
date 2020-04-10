#include <iostream>

int main()
{
    try {
        throw 0;
    }

    catch (...) {
        std::cout << "The error number" << std::endl;
    }

    return 0;
}