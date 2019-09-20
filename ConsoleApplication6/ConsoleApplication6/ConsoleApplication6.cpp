

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int foot;
	double inch, pound;
	setlocale(LC_ALL, "Ru");
	cout << "введите рост в футах и дюймах: ";
	cin >> foot>> inch;
	cout << "введите вес в фунтах: ";
	cin >> pound;
	
	cout << (pound / 2.2) / pow(((12*foot + inch) * 0.0254), 2);

}


