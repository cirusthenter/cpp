#include <chrono>
#include <iostream>

int main()
{
    auto time = std::chrono::system_clock::now();
    std::string time_s;
    int length;

    while (1) {
        time = std::chrono::system_clock::now();
        std::time_t current_time = std::chrono::system_clock::to_time_t(time);
        time_s = std::ctime(&current_time);
        length = time_s.length();
        time_s = time_s.substr(0, length - 1);
        std::cout << "\r" << time_s
                  << std::flush;
    }
}