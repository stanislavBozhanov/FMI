#include <iostream>

using namespace std;

int main()
{
	double x, y;
	cout << "Enter point X and Y coordinates: " << endl;
	cin >> x >> y;
	
	bool point_on_ox = y == 0;
	bool point_on_oy = x == 0;
	bool point_in_square = x > -1 && x < 1 && y < 0 && y > -2;
	bool point_in_half_circle = x * x + y * y < 4 && y > 0;
	if ((point_in_half_circle || point_in_square) && (!point_on_ox && !point_on_oy))
	{
		cout << "Point is in grey area!" << endl;
	}
	else
	{
		cout << "Point is not in grey area!" << endl;
	}
	return 0;
}
