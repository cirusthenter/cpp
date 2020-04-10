#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
    std::cout << std::oct << std::right 
    << std::setfill('0') << std::setw(8) 
    << 1234 << std::endl;
}