#include <chrono>
#include <iostream>
#include <math.h>
#include <unordered_map>
#include <utility>
#include <vector>
#define N 50

struct my_set {
    int a;
    int b;
    int c;
    int d;
    long long result;
    my_set(int na, int nb, int nc, int nd, long long nr)
    {
        a = na;
        b = nb;
        c = nc;
        d = nd;
        result = nr;
    }
};

long long cube(long long l, long long r)
{
    return l * l * l + r * r * r;
}

std::vector<my_set> hash_f()
{
    long long a, b, c, d;
    long long result;
    std::pair<int, int> cd;
    std::unordered_multimap<long long, std::pair<int, int>> umap;
    int cnt = 0;

    for (c = 1; c <= N; c++) {
        for (d = 1; d <= N; d++) {
            result = cube(c, d);
            cd = std::make_pair(c, d);
            umap.insert(std::make_pair(result, cd));
        }
    }

    std::vector<my_set> res;

    for (a = 1; a <= N; a++) {
        for (b = 1; b <= N; b++) {
            result = cube(a, b);
            // std::pair<std::unordered_multimap<long long, std::pair<int, int>>::iterator, std::unordered_multimap<long long, std::pair<int, int>>::iterator> range = umap.equal_range(result);
            // for (std::unordered_multimap<long long, std::pair<int, int>>::iterator it = range.first; it != range.second; ++it)
            //     cnt++;
            auto range = umap.equal_range(result);
            for (auto it = range.first; it != range.second; ++it) {
                // std::cout << "result: " << result << ", a: " << a << ", b: " << b << ", c: " << (*it).second.first << ", d: "
                //           << (*it).second.second << std::endl;
                ++cnt;
                my_set new_set(a, b, (*it).second.first, (*it).second.second, result);
                res.push_back(new_set);
            }
        }
    }
    std::cout << "hash: " << cnt << std::endl;

    return res;
}

void On4()
{
    int cnt = 0;

    for (long long a = 1; a <= N; a++) {
        for (long long b = 1; b <= N; b++) {
            for (long long c = 1; c <= N; c++) {
                for (long long d = 1; d <= N; d++) {
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

    std::cout << "On4: " << cnt << std::endl;
}

std::vector<my_set> On3()
{
    int cnt = 0;
    std::vector<my_set> res;
    for (int a = 1; a <= N; ++a) {
        for (int b = 1; b <= N; ++b) {
            for (int c = 1; c <= N; ++c) {
                long double d = std::cbrt(cube(a, b) - c * c * c);
                if (d <= 0 || N < d)
                    continue;
                // std::cout << "result == " << cube(a, b) << std::endl;
                // std::cout << "a: " << a << "; b: " << b << "; c: " << c << "; d: " << d << std::endl;
                if (cube(a, b) == cube(c, d)) {
                    my_set new_set(a, b, c, d, cube(a, b));
                    res.push_back(new_set);
                    cnt++;
                }
            }
        }
    }
    std::cout << "On3: " << cnt << std::endl;

    return res;
}

int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    std::vector<my_set> hash_res = hash_f();
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "hash: " << duration.count() << " μs" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    On4();
    end = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "On4: " << duration.count() << " μs" << std::endl;
    std::vector<my_set> On3_res = On3();

    for (auto item1 : hash_res) {
        bool flag = false;
        for (auto item2 : On3_res) {
            if (item1.a != item2.a)
                continue;
            if (item1.b != item2.b)
                continue;
            if (item1.c != item2.c)
                continue;
            if (item1.d != item2.d)
                continue;
            if (item1.result != item2.result)
                continue;
            flag = true;
            break;
        }
        if (flag)
            continue;

        std::cout << "This is in hash, but not in On3" << std::endl;
        std::cout << "a: " << item1.a << "; b: " << item1.b << "; c: " << item1.c << "; d: " << item1.d << std::endl
                  << std::endl;
    }

    return 0;
}
