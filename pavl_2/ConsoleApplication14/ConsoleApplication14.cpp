#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ru");
	int n, last, i, k;

	cout <<"количество элементов: ";

	cin >> n;
	double* arr = new double[n];
	double c, sum, max;


	cout << "Заполнение массива: ";
	for (i = 0; i < n; i++) //кол-во элементов <С
	{
		cin >> arr[i];
	}
	cout << "C:" << endl;
	cin >> c;

	k = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] < c)
		{
			k++;
		}
	}
	cout << "1) " << k << endl;

	last = 0;
	for (i = 0; i < n; i++)   //сумма элементов после последного отрицательного
	{
		if (arr[i] < 0)
		{
			last = i;
		}
	}
	sum = 0;

	for (i = (last + 1); i < n; i++)
	{
		sum += arr[i];

	}

	cout << "2) " << sum << endl;

	max = arr[0];

	for (i = 0; i < n; i++)   // преобразование массива
	{
		if (arr[i] > max)
		{
			max = arr[i];

		}
	}
	double* arr1 = new double[n];
	k = 0;
	int km = n - 1;

	for (i = 0; i < n; i++) {
		if ((arr[i] <= max * 1.2) && (arr[i] >= max * 0.8))
		{
			arr1[k] = arr[i];
			k++;
		}
		else
		{
			arr1[km] = arr[i];
			km--;
		}


	}


	cout << "3) ";

	for (i = 0; i < n; i++)
	{
		cout << arr1[i] << "\t";
	}
}