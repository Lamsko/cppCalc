// cppCalc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "std_lib_facilities.h"

int main()
{
	cout << "Wpisz wyrazenie (obslugiwane operatory to: + i -): ";
	int lval = 0;
	int rval;
	char op;
	cin >> lval; //wczytanie pierwszego argumentu z lewej
	if (!cin) error("Na poczatku nie ma argumentu wyrazenia");
	while (cin >> op) {
		cin >> rval;

		switch (op) {
		case '+':
			lval += rval;
			break;
		case '-':
			lval -= rval;
			break;
		case '*':
			lval *= rval;
			break;
		case '/':
			lval /= rval;
			break;
		default:
			cout << "Wynik: " << lval << '\n';
			keep_window_open();
			return 0;
		}
	}
	error("Nieprawidlowe wyrazenie");
}

