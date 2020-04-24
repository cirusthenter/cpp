#include <iostream>
#include <utility>
#include <vector>

int main()
{
    std::vector<std::pair<int, int>> square_double;

    for (int i = 0; i < 100; ++i) {
        std::pair<int, int> s_d = std::make_pair(i*i, i*i*i);
        square_double.push_back(s_d);
    }

    for (int i = 0; i < 100; ++i) {
        std::cout << i << "; square: " << square_double[i].first << "; cube: " << square_double[i].second << std::endl;
    }

    return 0;
}
