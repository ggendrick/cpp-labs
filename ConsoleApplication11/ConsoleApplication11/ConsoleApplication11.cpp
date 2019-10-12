// ConsoleApplication11.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

struct change {
	char name[20];
	double r, m;

};
int main()
{
	change pizza;
	cout << "proizvoditel: ";
	cin.getline(pizza.name,20);
	cout << endl << "radius: ";
	cin >> pizza.r;
	cout << endl << "weight: ";
	cin >> pizza.m;
	cout << "Proizvoditel: " << pizza.name << "\t Radius " << pizza.r << "\t Weight " << pizza.m << endl;


}

