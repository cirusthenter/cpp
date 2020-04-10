#include <iostream>

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;
	if (n % 2 == 0) {
		if (m % 2 != 0) {
			cout << "YES" << endl;
			return 0;
		}
	} else {
		if (m % 2 == 0) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;

	return 0;
}
