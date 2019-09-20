// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	double km, l;
    cout << "введите расстояние в км и количество бензина в л: ";
	cin >> km>> l;
	cout << (l / km) * 100;

}
