#include <iostream>

using namespace std;

int main()
{
	int loop_cnt;

	cin >> loop_cnt;
	for (int i = 0; i < loop_cnt; i++) {
		int sum(0);
		int n;
		cin >> n;
		for (int j = 1; j <= n / 2; j++) {
			if (n % j == 0) {
				sum += j;
			}
		}
		if (sum == n) {
			cout << "perfect" << endl;
		} else if (sum - n == 1 || sum - n == -1) {
			cout << "nearly" << endl;
		} else {
			cout << "neither" << endl;
		}
	}

	return 0;
}
