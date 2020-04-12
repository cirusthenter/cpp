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
                for (long long d = 1; d <= N; d++) {
                    if (c == a && d == b)
                        continue;
                    if (c == b && d == a)
                        continue;
                    if (cube(a, b) == cube(c, d)) {
                        // std::cout << "result == " << cube(a, b) << std::endl;
                        // std::cout << "a: " << a << "; b: " << b << "; c: " << c << "; d: " << d << std::endl
                        //           << std::endl;
                        cnt++;
                    }
                }
            }
        }
    }

    std::cout << cnt << std::endl;
}