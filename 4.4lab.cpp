// 4.4lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
///Lab_4.4.cpp
//Озірковського Дениса Леонідовича
//Лабораторна робота №4.4
/* Табуляція функції, заданої графіком*/
//Варіант 11


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double R, dx, xp, xk, x, y;
	cout << "R?"; cin >> R;
	cout << "xp?"; cin >> xp;
	cout << "xk?"; cin >> xk;
	cout << "dx?"; cin >> dx;


	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(15) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	for (x = xp; x <= xk; x+=dx)
	{
		if (x <= -R)
			y = R - x;
		else
			if (x > -R && x <= -1)
				y = sqrt(R * R - (x + 1) * (x + 1));
			else
				if (x > -1 && x <= 1)
					y = R;
				else
					if (1 < x && x <= 2)
						y = 2 * R - x + 1 - R * x;
					else
						y = -1;

		cout << "---------------------------" << endl;
		cout << "|" << setw(5) << "x=" << " |" << x;
		cout << setw(7) << "y=" << " |" << y << endl;
		cout << "---------------------------" << endl;

	}
	
	return 0;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
