#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	string date_str, time_str;
	int month, day, hour, min;

	cin >> date_str >> time_str;
	month = stoi(date_str.substr(0, 2));
	day   = stoi(date_str.substr(3, 5));
	hour  = stoi(time_str.substr(0, 2));
	min   = stoi(time_str.substr(3, 5));

	if (hour >= 24) {
		day += hour / 24;
		hour %= 24;
	}
	cout << setw(2) << setfill('0') << month;
	cout << "/";
	cout << setw(2) << setfill('0') << day;	
	cout << " ";
	cout << setw(2) << setfill('0') << hour;
	cout << ":";
        cout << setw(2) << setfill('0') << min;
	cout << endl;
	
	return 0;
}
