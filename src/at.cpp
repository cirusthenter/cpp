#include <iostream>
#include <string>

int main()
{
    std::string str{"abcdeabcde"};

    std::cout << "str.find(\"bc\"): " << str.find("bc") << std::endl;
    // str.find("bc"): 1

    std::cout << "str.rfind(\"bc\"): " << str.rfind("bc") << std::endl;
    // str.rfind("bc"): 6

    std::cout << "str.find(\"xyz\"): " << str.find("xyz") << std::endl;
    // str.find("xyz"): 18446744073709551615

    std::cout << "std::string::npos: " << std::string::npos << std::endl;
    // std::string::npos: 18446744073709551615

    if (str.find("xyz") == -1) {
        std::cout << "str.find(\"xyz\") == -1: true" << std::endl;
    } else {
        std::cout << "str.find(\"xyz\") == -1: false" << std::endl;
    }
    // str.find("xyz") == -1: true

    if (str.find("xyz") > 0) {
        std::cout << "str.find(\"xyz\") > 0: true" << std::endl;
    } else {
        std::cout << "str.find(\"xyz\") > 0: false" << std::endl;
    }
    // str.find("xyz") > 0: true

    if (str.find("xyz") < 0) {
        std::cout << "str.find(\"xyz\") < 0: true" << std::endl;
    } else {
        std::cout << "str.find(\"xyz\") < 0: false" << std::endl;
    }
    // str.find("xyz") < 0: false

    return 0;
}