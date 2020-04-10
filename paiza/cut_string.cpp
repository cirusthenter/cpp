#include <iostream>

using namespace std;

int main()
{
	int length;

	string str;
	cin >> length;
	cin >> str;
	cout << str.substr(0, length) << endl;

	return 0;
}
