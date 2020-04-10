#include <iostream>

void myswap(int& x, int& y);
int main()
{
	int a = 3, b = 5;
	std::cout << "a == " << a << ", b == " << b << std::endl;
	myswap(a, b);
	std::cout << "a == " << a << ", b == " << b << std::endl;

	return 0;
}

void myswap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}
