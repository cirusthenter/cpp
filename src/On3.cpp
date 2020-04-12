#include <cmath>
#include <iostream>
#define N 1000

long long cube(long long l, long long r)
{
    return l * l * l + r * r * r;
}

int main()
{
    int cnt = 0;

    for (long long a = 1; a <= N; a++) {
        for (long long b = 1; b <= N; b++) {
            for (long long c = 1; c <= N; c++) {
                long long d = std::cbrt(cube(a, b) - c * c * c);
                if (d < 0)
                    continue;
                if (c == a && d == b)
                    continue;
                if (c == b && d == a)
                    continue;
                if (cube(a, b) == cube(c, d)) {
                    std::cout << "result == " << cube(a, b) << std::endl;
                    std::cout << "a: " << a << "; b: " << b << "; c: " << c << "; d: " << d << std::endl
                              << std::endl;
                    cnt++;
                }
            }
        }
        std::cout << a << std::endl;
    }

    std::cout << cnt << std::endl;
}