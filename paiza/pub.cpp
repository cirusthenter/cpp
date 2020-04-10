#include <iostream>

int main()
{
	int non_drinking, drinking;
	
	std::cin >> drinking >> non_drinking;
	std::cout << drinking * 6000 + non_drinking * 4000 << std::endl;

	return 0;
}
