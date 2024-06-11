// randwalk.cpp 11.15
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << " Zadej cilovou vzdalenost (q pro ukonceni): ";
	while (cin >> target)
	{
		cout << "Zadej delku kroku : ";
			if (!(cin >> dstep))
				break;

		while (result.magval() < target)
		{
				direction = rand() % 360;
		step.set(dstep, direction, 'p');
		result = result + step;
		steps++;
		}
	cout << "Po " << steps << " krocich ma subjekt tuto pozici:\n";
	cout << result << endl;
	result.polar_mode();
	cout << " nebo\n" << result << endl;
	cout << " Prumerna vzdalenost na jeden krok = " << result.magval() / steps << endl;
	steps = 0;
	result.set(0.0, 0.0);
	cout << " Zadajte cilovou vzdalenost (q pro ukonceni): ";
	}
cout << " Nasledanou!\n";

return 0;
}
