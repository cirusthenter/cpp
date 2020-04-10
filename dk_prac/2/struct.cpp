#include <iostream>

struct xyz {
    float x;
    float y;
    float z;
};

int main()
{
    xyz coordinate = {
        50.4,
        45.7,
        56.8,
    };

    std::cout << coordinate.x << std::endl;
    std::cout << coordinate.y << std::endl;
    std::cout << coordinate.z << std::endl;

    return 0;
}