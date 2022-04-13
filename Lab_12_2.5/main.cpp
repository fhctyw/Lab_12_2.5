#include <iostream>
#include <Windows.h>
#include "Rational.h"
using namespace std;

int main()
{
	Rational r6({ 14, 7 });
	Rational r2({ 7, 14 });

	Rational r4 = r6 + r2;

	cout << r4 << endl;
	return 0;

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Rational r = { {3, 4} }, r1;
	cout << r << endl;
	cin >> r1;
	
	cout << r << " + " << r1 << " = " << r + r1 << endl;
	cout << r << " / " << r1 << " = " << r / r1 << endl;
	cout << r << " - " << r1 << " = " << r - r1 << endl;


	return 0;
}