#include <iostream>
#include <list>
#include <iterator>

int main()
{
    std::list<std::string> s_l;


    std::cout << std::endl << "s_l.insert(s_l.begin(), \"Manners\");" << std::endl;
    s_l.insert(s_l.begin(), "Manners");
    for (std::string str: s_l) {
        std::cout << str << std::endl;
    }

    std::cout << std::endl << "s_l.insert(s_l.end(), \"man\");" << std::endl;
    s_l.insert(s_l.end(), "man");
    for (std::string str: s_l) {
        std::cout << str << std::endl;
    }

    std::cout << "auto iter = s_l.end();" << std::endl;
    std::cout << "std::advance(iter, -1);" << std::endl;
    std::cout << "s_l.insert(iter, \"maketh\");" << std::endl;
    auto iter = s_l.end();
    std::advance(iter, -1);
    s_l.insert(iter, "maketh");
    for (std::string str: s_l) {
        std::cout << str << std::endl;
    }

}