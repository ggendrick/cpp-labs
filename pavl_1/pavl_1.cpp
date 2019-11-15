#include<iostream>
#include<math.h>
using namespace std;

double f(int x, int a, int b,int c)
{
	double rez;
	if((x<0)&&(b!=0))
	{
		rez = a * x * x * x + b * x * x;
	}
	if ((x > 0) && (b == 0))
	{
		rez = (x - a) / (x - c);
	}
	else
	{
		rez = (x + 5) / (c * (x - 10));
	}
	return rez;
}
int main()
{
	setlocale(LC_ALL, "Ru");
	int xn, xk, dx, a, b, c;
	cout << "введите начальное значение: ";
	cin >> xn;
	cout << "введите конечное значение: ";
	cin >> xk;
	cout << "введите шаг: ";
	cin >> dx;
	cout << "введите a,b и c: ";
	cin >> a >> b >> c;

	if (((a > 1) || (a < 1)) && ((b > 1) || (b < 1)) && ((c > 1) || (c < 1)))
	{
		for (xn; xn <= xk; xn += dx)
			cout << f(xn, a, b, c);
	}
	else
		for (xn; xn <= xk; xn += dx)
			cout << static_cast<int>(f(xn, a, b, c));
			
}