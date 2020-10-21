// Lab_03_4.cpp
// Михайлов Олександр
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 19

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	double x, y, R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	if ((y >= sqrt(R * R - x * x) && y <= 2 * R && y >= 0) || (y >= -x - 2 * R && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}