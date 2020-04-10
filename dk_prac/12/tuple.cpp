#include <iostream>
#include <tuple>

int main()
{
    std::tuple<int, int, char, std::string> sn{6171, 356, s, "Shuhei Nakano"};

    std::cout << std::get<0>(sn) << std::endl;
    std::cout << std::get<1>(sn) << std::endl;
    std::cout << std::get<2>(sn) << std::endl;
    std::cout << std::get<3>(sn) << std::endl;
}