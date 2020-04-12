#include <iostream>

int main()
{
    std::string s1 = "Hello again";

    std::string s2{s1, 6};
    std::cout << "s2: " << s2 << std::endl;
    // s2: again

    std::string s3{"Hello again", 6};
    std::cout << "s3: " << s3 << std::endl;
    // s3: Hello 

    std::string s4{s1.begin(), s1.end() - 5};
    std::cout << "s4: " << s4 << std::endl;
    // s4: Hello

    return 0;
}