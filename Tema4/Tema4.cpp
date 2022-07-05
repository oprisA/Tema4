// Tema4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	//Cerinta
	//
	//Se citesc doua numere naturale. 
	//Afisati suma, diferenta, produsul si catul lor, in aceasta ordine, separate prin cate un spatiu.
	//
	//Restrictii si precizari
	//
	//Cele doua numere citite vor fi mai mici decat 500;
	//Din primul numar se va scadea al doilea;
	//Primul numar se va imparti la al doilea;se va afisa catul impartirii intregi.
	//
	//Exemplu
	//
	//Intrare
	//15 3
	//
	//Iesire 
	//18 12 45 5


	int x, y;

	cout << "Citim de la tastatura x si y" << endl;

	cin >> x >> y;

	int s, d, p, i;

	s = x + y;

	d = x - y;

	p = x * y;

	i = x / y;

	cout << "Se va afisa suma, diferenta, produsul si catul lor, in aceasta ordine, separate prin cate un spatiu :  " << endl;

	cout << s << " " << d << " " << p << " " << i;

}
