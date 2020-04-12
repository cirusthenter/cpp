#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main()
{
    std::vector<std::string> sv{"foo", "orange", "Apple", "Tony", "zoo", "cirus", "Cirus", "6171", "_AAA"};

    std::cout << "before sort: " << std::endl;
    int i = 1;
    for (std::string str: sv) {
        std::cout << i << ": " << str << std::endl;
        i++;
    }

    std::sort(sv.begin(), sv.end(), [](std::string l, std::string r) { return r > l; });
    std::cout << std::endl;

    std::cout << "after sort: " << std::endl;
    i = 1;
    for (std::string str: sv) {
        std::cout << i << ": " << str << std::endl;
        i++;
    }

    return 0;
}