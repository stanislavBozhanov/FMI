#include <iostream>

using namespace std;

// 2 : 28 days or 29 days
// months with 31 days 1, 3, 5, 7, 8, 10, 12
// months with 30 days 4, 6, 9, 11
int main()
{
	int day, month, year;
	cout << "Enter day, month, year: " << endl;
	do
	{
		cin >> day >> month >> year;

	} while (day <= 0 && month <= 0 && year <= 0);
	bool is_leap_year = year % 4 == 0 && (year % 400 == 0 && year % 100 != 0);

	if (month == 3)
	{
		if (day == 1 && is_leap_year)
		{
			cout << 29 << "/" << month - 1 << "/" << year << endl;
		}
		else if (day == 1 && !is_leap_year)
		{
			cout << 28 << "/" << month - 1 << "/" << year << endl;
		}
		else
		{
			cout << day - 1 << "/" << month << "/" << year << endl;
		}
	}
	else if (month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (day == 1)
		{
			cout << 30 << "/" << month - 1 << "/" << year << endl;
		}
		else
		{
			cout << day - 1 << "/" << month << "/" << year << endl;
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day == 1)
		{
			cout << 31 << "/" << month - 1 << "/" << year << endl;
		}
		else
		{
			cout << day - 1 << "/" << month << "/" << year << endl;
		}
	}
	// month == 1
	else
	{
		if (day == 1)
		{
			cout << 31 << "/" << 12 << "/" << year - 1 << endl;
		}
		else
		{
			cout << day - 1 << "/" << month << "/" << year << endl;
		}
	}
	return 0;
}