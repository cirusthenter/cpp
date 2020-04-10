#include <iostream>

template <typename CirusType>
CirusType yeah(CirusType x, CirusType y)
{
    CirusType z = x + y;
    std::cout << x << " + " << y << " == " << z << std::endl;

    return z;
}

template <typename ThenterType>
class Vector3d
{
public:
    ThenterType x;
    ThenterType y;
    ThenterType z;
    void print_distance()
    {
        std::cout << (x*x + y*y + z*z) << std::endl;
    }
};



int main()
{
    Vector3d<float> new_vector{3.0f, 5.0f, 7.0f};
    new_vector.print_distance();

    return 0;
}