

#include <iostream>
#include <math.h>
using namespace std;
bool foo(double x1,double y1,double x2,double y2,double r)
{
	double k = (y2 - y1) / (x2 - x1);
	double b = y1 - x1 * (y2 - y1) / (x2 - x1);                      //(k^2+1)*x^2+2kxb-r^2+b^2
	bool rez=false;
	double discr = (2 * k * b) * (2 * k * b) - 4 * (k * k + 1) * (b * b - r * r);
	double an1 = 0, an2 = 0;
	if (discr>0)
	{
		an1 = (-2 * k * b - sqrt(discr))/(2*(k*k+1));
		an2 = (-2 * k * b + sqrt(discr)) / (2*( k * k + 1));
	}
	if (discr > 0 && ((an1 > x1) && (an1 < x2) || (an1 < x1) && (an1 > x2) || (an2 > x1) && (an2 < x2) || (an2 < x1) && (an2 > x2)))
	{
		rez = true;
	}
	return rez;
}


int main()
{
	setlocale(LC_ALL, "Ru");
	int i, j, k,n,i1=0,j1=0,k1=0;
	cout << "введите количество точек: ";
	cin >> n;


	double *arrx = new double[n];
	double *arry = new double[n];
	double r,s1=pow(10,307),s=0;
	cout << "введите радиус R: ";
	cin >> r;
	for (i = 0; i < n; i++)
	{
		cout << "введите коордианату х: ";
		cin >> arrx[i];
		cout << "введите коордианату y: ";
		cin >> arry[i];


	}

	
	for (i = 0; i < n - 2; i++)
	{
		for (j = i+1; j < n - 1; j++)
		{
			for (k = j+1; k < n; k++) 
			{
				if ((foo(arrx[i], arry[i], arrx[j], arry[j], r) == true)&& (foo(arrx[j], arry[j], arrx[k], arry[k], r) == true)&& (foo(arrx[k], arry[k], arrx[i], arry[i], r) == true))
			{
					cout << "[" << arrx[i] <<";"<< arry[i] << "] \t [" << arrx[j] <<";"<< arry[j] << "] \t [" << arrx[k] <<";"<< arry[k] << "]\n";
					s = 0.5 * ((arrx[i] - arrx[k]) * (arry[j] - arry[k]) - (arry[i] - arry[k]) * (arrx[j] - arrx[k]));
					if (s < s1) {
						s1 = s; i1 = i; j1 = j; k1 = k;
					}
			}
				
			}
		}



	}
	if (s1 != pow(10, 307)) 
	{ 
		cout << "треугольник с минимальной площадью: " << "[" << arrx[i1] << ";" << arry[i1] << "] \t [" << arrx[j1] << ";" << arry[j1] << "] \t [" << arrx[k1] << ";" << arry[k1] << "]\n"; 
	}
}
