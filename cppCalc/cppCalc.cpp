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
	int res;
	cin >> lval >> op >> rval; //wczytuje coś w rodzaju 1 + 3
	if (op == '+')
		res = lval + rval;
	else if (op == '-')
		res = lval - rval;
	cout << "Wynik: " << res << '\n';
	keep_window_open();
	return 0;
}

