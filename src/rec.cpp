#include <iostream>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;

int f1(int n) {
        if (n <= 1) {
                return 1;
        }
        return 2 * f1(n - 1);
}

int f2(int n) {
        if (n <= 1) {
                return 1;
        }
        return f2(n - 1) + f2(n - 1);
}

int main()
{
        int n;

        cout << "Input N: ";
        cin >> n;

        auto start1 = high_resolution_clock::now();
        f1(n);
        auto stop1 = high_resolution_clock::now();
        auto duration1 = duration_cast<microseconds>(stop1 - start1);
        cout << "Time taken by 2 * f(n - 1): "
        << duration1.count() << " microeconds" << endl;
        cout << endl;

        auto start2 = high_resolution_clock::now();
        f2(n);
        auto stop2 = high_resolution_clock::now();
        auto duration2 = duration_cast<microseconds>(stop2 - start2);
        cout << "Time taken by f(n - 1) + f(n - 1): "
        << duration2.count() << " microeconds" << endl;

        return 0;
}
