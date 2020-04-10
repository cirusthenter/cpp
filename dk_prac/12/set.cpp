#include <iostream>
#include <set>

int main()
{
    std::set<std::string> is = {"abc", "bgf", "yeah"};

    for (auto itr = is.begin(); itr != is.end(); ++itr) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl <<std::endl;

    is.insert("yahoo");
    for (auto itr = is.begin(); itr != is.end(); ++itr) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl <<std::endl;
    
    is.insert("4325");

    for (auto itr = is.begin(); itr != is.end(); ++itr) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Looking for \"abc\": ";
    auto iter = is.find("abc");
    if (iter != is.end()) {
        std::cout << "found" << std::endl;
    } else {
        std::cout << "not found" << std::endl;
    }

    std::cout << "Looking for \"shuhei\": ";
    iter = is.find("shuhei");
    if (iter != is.end()) {
        std::cout << "found" << std::endl;
    } else {
        std::cout << "not found" << std::endl;
    }
}