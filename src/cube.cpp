#include <iostream>
#include <cmath>

#define N 50

int cube(int l, int r)
{
	return l*l*l + r*r*r;
}

int main()
{
	std::cout << "std::cbrt(50*50*50 + 37*37*37 - 50*50*50) == "<< std::cbrt(50*50*50 + 37*37*37 - 50*50*50) << std::endl;
	std::cout << "(std::cbrt(50*50*50 + 37*37*37 - 50*50*50) == 37)  == "<< (std::cbrt(50*50*50 + 37*37*37 - 50*50*50) == 37)<< std::endl;
	return 0;
}
