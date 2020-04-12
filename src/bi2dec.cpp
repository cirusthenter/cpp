#include <iostream>

int main()
{
    std::string input, base2;
    std::cin >> input;
    if (input.find("0b") != 0) {
        std::cerr << "error: input a binary number that starts with \"0b\"" << std::endl;
        return -1;
    }
    base2 = input.substr(2);
    int dec = 0;
    try {
        dec = std::stoi(base2, nullptr, 2);
    }
    catch (...){
        std::cerr << "error: input a valid binary number" << std::endl;
        return -1;
    }

    std::cout << input << " == " << dec << std::endl;

    return 0;
}