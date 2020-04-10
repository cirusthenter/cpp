#include <iostream>
#include <vector>
#include <string>

int main()
{

    std::vector<std::string> string_vector;
    string_vector.insert(string_vector.begin(), "shuhei");
    string_vector.insert(string_vector.begin(), "nakano");
    string_vector.insert(string_vector.end(), "keio");
    string_vector.insert(string_vector.end(), "university");
    string_vector.insert(string_vector.begin() + 2, "CirusThenter");

    std::cout << "Inserted: " << std::endl;
    for (std::string str: string_vector) {
        std::cout << str << std::endl;
    }
    std::cout << "size: " << string_vector.size() << std::endl;

    std::cout << std::endl;
    std::cout << "Deleted: " << std::endl;
    string_vector.erase(string_vector.begin() + 1, string_vector.end());
    for (std::string str: string_vector) {
        std::cout << str << std::endl;
    }
    std::cout << "size: " << string_vector.size() << std::endl;

    std::cout << std::endl;
    std::cout << "Pushed: " << std::endl;
    string_vector.push_back("Manners maketh man.");
    string_vector.push_back("It's going to happen because I'm going to make it happen.");
    for (std::string str: string_vector) {
        std::cout << str << std::endl;
    }
    std::cout << "size: " << string_vector.size() << std::endl;

    std::cout << std::endl;
    std::cout << "Poped: " << std::endl;
    string_vector.pop_back();
    for (std::string str: string_vector) {
        std::cout << str << std::endl;
    }
    std::cout << "size: " << string_vector.size() << std::endl;

    std::cout << std::endl;
    std::cout << "Cleared: " << std::endl;
    string_vector.clear();
    for (std::string str: string_vector) {
        std::cout << str << std::endl;
    }
    std::cout << "size: " << string_vector.size() << std::endl;
}