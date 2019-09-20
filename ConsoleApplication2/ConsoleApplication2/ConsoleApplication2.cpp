
#include <iostream>

using namespace std;

int main()
{
	double x;
	setlocale(LC_ALL, "Russian");
	cout << "введите расстояние в фарлонгах ";
	cin >> x;
	cout << x * 220;
}

