#include <iostream>
#include <unordered_map>
#define N 1000

struct struct_two_pair {
    long long c;
    long long d;
};

long long cube(long long l, long long r)
{
    return l * l * l + r * r * r;
}

void hash_f()
{
    long long a, b, c, d;
    long long result;
    struct_two_pair cd;
    std::unordered_map<long long, struct_two_pair> umap;
    int cnt = 0;

    for (c = 1; c < N; c++) {
        for (d = 1; d < N; d++) {
            result = cube(c, d);
            cd.c = c;
            cd.d = d;
            umap[result] = cd;
        }
    }

    for (a = 1; a < N; a++) {
        for (b = 1; b < N; b++) {
            result = cube(a, b);
            cd = umap[result];
            c = cd.c;
            d = cd.d;
            if (c == 0 || d == 0)
                continue;
            if (c == a && d == b)
                continue;
            if (c == b && d == a)
                continue;
            if (result == cube(c, d)) {
                std::cout << "result == " << result << std::endl;
                std::cout << "a: " << a << "; b: " << b << "; c: " << c << "; d: " << d << std::endl
                          << std::endl;
                cnt++;
            }
        }
    }
    std::cout << cnt << std::endl;
}

void On4()
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

void On3()
{
}

int main()
{
    hash_f();
    // On4();
    // On3();

    return 0;
}