#include <chrono>
#include <cstdio>
#include <iostream>
#include <math.h>
#include <unordered_map>
#include <utility>

long long cube(long long l, long long r)
{
    return l * l * l + r * r * r;
}

int hash_f(int max_n)
{
    long long a, b, c, d;
    long long result;
    std::pair<int, int> cd;
    std::unordered_multimap<long long, std::pair<int, int> > umap;
    int cnt = 0;

    for (c = 1; c <= max_n; c++) {
        for (d = 1; d <= max_n; d++) {
            result = cube(c, d);
            cd = std::make_pair(c, d);
            umap.insert(std::make_pair(result, cd));
        }
    }

    for (a = 1; a <= max_n; a++) {
        for (b = 1; b <= max_n; b++) {
            result = cube(a, b);
            // std::pair<std::unordered_multimap<long long, std::pair<int, int>>::iterator, std::unordered_multimap<long long, std::pair<int, int>>::iterator> range = umap.equal_range(result);
            // for (std::unordered_multimap<long long, std::pair<int, int>>::iterator it = range.first; it != range.second; ++it)
            //     cnt++;
            auto range = umap.equal_range(result);
            for (auto it = range.first; it != range.second; ++it)
                // std::cout << "result: " << result << ", a: " << a << ", b: " << b << ", c: " << (*it).second.first << ", d: "
                //           << (*it).second.second << std::endl;
                ++cnt;
        }
    }
    return cnt;
}

int On4(int max_n)
{
    int cnt = 0;

    for (long long a = 1; a <= max_n; a++) {
        for (long long b = 1; b <= max_n; b++) {
            for (long long c = 1; c <= max_n; c++) {
                for (long long d = 1; d <= max_n; d++) {
                    if (cube(a, b) == cube(c, d)) {
                        // std::cout << "result == " << cube(a, b) << std::endl;
                        // std::cout << "a: " << a << "; b: " << b << "; c: " << c << "; d:
                        // " << d << std::endl
                        //           << std::endl;
                        cnt++;
                    }
                }
            }
        }
    }

    return cnt;
}

int On3(int max_n)
{
    int cnt = 0;
    for (int a = 1; a <= max_n; ++a) {
        for (int b = 1; b <= max_n; ++b) {
            for (int c = 1; c <= max_n; ++c) {
                int d = std::cbrt(cube(a, b) - c * c * c);
                if (d < 1 || max_n < d)
                    continue;
                // std::cout << "result == " << cube(a, b) << std::endl;
                // std::cout << "a: " << a << "; b: " << b << "; c: " << c << "; d: " << d << std::endl;
                if (cube(a, b) == cube(c, d)) {
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

void exec_func(int (*func)(int max_n), int max_n)
{
    int cnt;
    auto start = std::chrono::high_resolution_clock::now();
    cnt = func(max_n);
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "(count: " << cnt << ", time: " << duration.count() << " ms)" << std::endl;
}

void print_result(int max_n)
{
    std::cout << "N: " << max_n << std::endl;

    std::cout << "On4 : ";
    exec_func(On4, max_n);

    std::cout << "On3 : ";
    exec_func(On3, max_n);

    std::cout << "hash: ";
    exec_func(hash_f, max_n);
    std::cout << std::endl;
}

int main()
{
//    freopen("yeahyeah.txt", "w", stdout);
	print_result(50);

    return 0;
}
