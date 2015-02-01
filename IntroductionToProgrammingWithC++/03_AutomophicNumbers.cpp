#include<iostream>

using namespace std;

int main()
{
	const unsigned long long MAX_VALUE_SQRT = 4294967296;
	unsigned long long wanted_numbers;
	unsigned long long number = 1;
	cout << "Enter number: ";
	cin >> wanted_numbers;
	unsigned long long count = 0;
	while (count <= wanted_numbers && number != MAX_VALUE_SQRT)
	{
		unsigned long long number_copy = number;
		unsigned long long tenth_power = 1;
		while (number_copy > 0)
		{
			number_copy /= 10;
			tenth_power *= 10;
		}
		if ((number * number) % tenth_power == number)
		{
			cout << number << endl;
			count++;
		}
		number++;
	}
	return 0;
}