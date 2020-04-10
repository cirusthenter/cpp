#include <iostream>

int main()
{
    std::string buf;
    while(true) {
        getline(std::cin, buf);
        std::cout << "length of \"" << buf << "\": " << buf.length() << std::endl;
    }

    return 0;
}