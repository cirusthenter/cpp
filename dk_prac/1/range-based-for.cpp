#include <iostream>

int main()
{
    int students[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int student: students) {
        if (student % 3 == 0) {
            std::cout << student << std::endl;
        }
    }

    return 0;
}